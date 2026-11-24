#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D288
// Address: 0x10d288 - 0x10d35c
void sub_0010D288_0x10d288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D288_0x10d288");
#endif

    ctx->pc = 0x10d288u;

    // 0x10d288: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10d288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10d28c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x10d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10d290: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x10d290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x10d294: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x10d294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d298: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10d298u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x1000e010
    // 0x10d29c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10d2a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D2A0u;
    {
        const bool branch_taken_0x10d2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D2A0u;
        // 0x10d2a4: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d2a0) {
            ctx->pc = 0x10D2B8u;
            goto label_10d2b8;
        }
    }
    ctx->pc = 0x10D2A8u;
    // 0x10d2a8: 0xf  sync
    ctx->pc = 0x10d2a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d2ac: 0x42000038  ei
    ctx->pc = 0x10d2acu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x10d2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x10D2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D2B0u;
        // 0x10d2b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D2B8u;
label_10d2b8:
    // 0x10d2b8: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x10d2b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10d2bc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x10D2BCu;
    {
        const bool branch_taken_0x10d2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D2BCu;
        // 0x10d2c0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d2bc) {
            ctx->pc = 0x10D31Cu;
            goto label_10d31c;
        }
    }
    ctx->pc = 0x10D2C4u;
    // 0x10d2c4: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x10d2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10d2c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10d2cc: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x10d2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x10d2d0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x10d2d0u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 4)); // MMIO: 0x1000b410
    // 0x10d2d4: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x10d2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x10d2d8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x10d2d8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7)); // MMIO: 0x1000b420
    // 0x10d2dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10d2e0: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x10d2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x10d2e4: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x10d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10d2e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10d2e8u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 3)); // MMIO: 0x1000b400
    // 0x10d2ec: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x10d2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x10d2f0: 0x34a5fff0  ori         $a1, $a1, 0xFFF0
    ctx->pc = 0x10d2f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65520);
    // 0x10d2f4: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x10d2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x10d2f8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x10d2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10d2fc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x10d2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x10d300: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10d300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10d304: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x10d304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10d308: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10d308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10d30c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x10d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x10d310: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x10d310u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x10d314: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10D314u;
    {
        const bool branch_taken_0x10d314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D314u;
        // 0x10d318: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d314) {
            ctx->pc = 0x10D34Cu;
            goto label_10d34c;
        }
    }
    ctx->pc = 0x10D31Cu;
label_10d31c:
    // 0x10d31c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x10d31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x10d320: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10d320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10d324: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x10d324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x10d328: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x10d328u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 4)); // MMIO: 0x1000b410
    // 0x10d32c: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x10d32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x10d330: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10d330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10d334: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x10d334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10d338: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x10d338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10d33c: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x10d33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x10d340: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10d340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x10d344: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10d344u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 5)); // MMIO: 0x1000b400
    // 0x10d348: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x10d348u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_10d34c:
    // 0x10d34c: 0xf  sync
    ctx->pc = 0x10d34cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d350: 0x42000038  ei
    ctx->pc = 0x10d350u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x10d354: 0x3e00008  jr          $ra
    ctx->pc = 0x10D354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D354u;
        // 0x10d358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D35Cu;
}
