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

// Function: sub_0024B090
// Address: 0x24b090 - 0x24b110
void sub_0024B090_0x24b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B090_0x24b090");
#endif

    ctx->pc = 0x24b090u;

    // 0x24b090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b094: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24b094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b098: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24B098u;
    {
        const bool branch_taken_0x24b098 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B098u;
        // 0x24b09c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b098) {
            ctx->pc = 0x24B0B8u;
            goto label_24b0b8;
        }
    }
    ctx->pc = 0x24B0A0u;
    // 0x24b0a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b0a4: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24b0a8: 0xa0401118  sb          $zero, 0x1118($v0)
    ctx->pc = 0x24b0a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4D1118u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4D1118u, _value); } while (0);
    // 0x24b0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x24B0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0ACu;
        // 0x24b0b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B0B4u;
    // 0x24b0b4: 0x0  nop
    ctx->pc = 0x24b0b4u;
    // NOP
label_24b0b8:
    // 0x24b0b8: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x24b0b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24b0bc: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x24b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x24b0c0: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24B0C0u;
    {
        const bool branch_taken_0x24b0c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0C0u;
        // 0x24b0c4: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b0c0) {
            ctx->pc = 0x24B0F8u;
            goto label_24b0f8;
        }
    }
    ctx->pc = 0x24B0C8u;
    // 0x24b0c8: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24B0C8u;
    {
        const bool branch_taken_0x24b0c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0C8u;
        // 0x24b0cc: 0x3c04004d  lui         $a0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b0c8) {
            ctx->pc = 0x24B0F8u;
            goto label_24b0f8;
        }
    }
    ctx->pc = 0x24B0D0u;
    // 0x24b0d0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x24b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x24b0d4: 0x2448d580  addiu       $t0, $v0, -0x2A80
    ctx->pc = 0x24b0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956416));
    // 0x24b0d8: 0x24871118  addiu       $a3, $a0, 0x1118
    ctx->pc = 0x24b0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4376));
    // 0x24b0dc: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x24b0dcu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x66D580u));
    // 0x24b0e0: 0x81060001  lb          $a2, 0x1($t0)
    ctx->pc = 0x24b0e0u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x66D581u));
    // 0x24b0e4: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x24b0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x24b0e8: 0xa0e60001  sb          $a2, 0x1($a3)
    ctx->pc = 0x24b0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x24b0ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24B0ECu;
    {
        const bool branch_taken_0x24b0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0ECu;
        // 0x24b0f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b0ec) {
            ctx->pc = 0x24B104u;
            goto label_24b104;
        }
    }
    ctx->pc = 0x24B0F4u;
    // 0x24b0f4: 0x0  nop
    ctx->pc = 0x24b0f4u;
    // NOP
label_24b0f8:
    // 0x24b0f8: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24b0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x24b0fc: 0xa0801118  sb          $zero, 0x1118($a0)
    ctx->pc = 0x24b0fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4D1118u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4D1118u, _value); } while (0);
    // 0x24b100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24b104:
    // 0x24b104: 0x24841118  addiu       $a0, $a0, 0x1118
    ctx->pc = 0x24b104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4376));
    // 0x24b108: 0x8049ed2  j           func_127B48
    ctx->pc = 0x24B108u;
    ctx->pc = 0x24B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B108u;
    // 0x24b10c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    sub_00127B48_0x127b48(rdram, ctx, runtime); return;
    ctx->pc = 0x24B110u;
}
