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

// Function: sub_00179450
// Address: 0x179450 - 0x179510
void sub_00179450_0x179450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179450_0x179450");
#endif

    switch (ctx->pc) {
        case 0x179498u: goto label_179498;
        case 0x1794ccu: goto label_1794cc;
        case 0x1794fcu: goto label_1794fc;
        default: break;
    }

    ctx->pc = 0x179450u;

    // 0x179450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x179450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x179454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x179458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17945c: 0x8c902160  lw          $s0, 0x2160($a0)
    ctx->pc = 0x17945cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8544)));
    // 0x179460: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x179460u;
    {
        const bool branch_taken_0x179460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x179464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179460u;
        // 0x179464: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179460) {
            ctx->pc = 0x179500u;
            goto label_179500;
        }
    }
    ctx->pc = 0x179468u;
    // 0x179468: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x179468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x17946c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x17946cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x179470: 0x34420047  ori         $v0, $v0, 0x47
    ctx->pc = 0x179470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)71);
    // 0x179474: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x179474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x179478: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x179478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x17947c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x17947cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x179480: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x179480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x179484: 0x344217fd  ori         $v0, $v0, 0x17FD
    ctx->pc = 0x179484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x179488: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17948c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x17948cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x179490: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x179490u;
    SET_GPR_U32(ctx, 31, 0x179498u);
    ctx->pc = 0x179494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179490u;
    // 0x179494: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x179490u, 0x179498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179498u;
label_179498:
    // 0x179498: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x179498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x17949c: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x17949cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x1794a0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1794a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1794a4: 0x34420048  ori         $v0, $v0, 0x48
    ctx->pc = 0x1794a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)72);
    // 0x1794a8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1794a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1794ac: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1794acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1794b0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1794b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1794b4: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x1794b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x1794b8: 0x3442020b  ori         $v0, $v0, 0x20B
    ctx->pc = 0x1794b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)523);
    // 0x1794bc: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1794bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1794c0: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x1794c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x1794c4: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1794C4u;
    SET_GPR_U32(ctx, 31, 0x1794CCu);
    ctx->pc = 0x1794C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1794C4u;
    // 0x1794c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1794C4u, 0x1794CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1794CCu;
label_1794cc:
    // 0x1794cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1794ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1794d0: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x1794d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x1794d4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1794d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1794d8: 0x3442001a  ori         $v0, $v0, 0x1A
    ctx->pc = 0x1794d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
    // 0x1794dc: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1794dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1794e0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1794e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1794e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1794e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1794e8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1794e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1794ec: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x1794ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x1794f0: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x1794f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x1794f4: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x1794F4u;
    SET_GPR_U32(ctx, 31, 0x1794FCu);
    ctx->pc = 0x1794F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1794F4u;
    // 0x1794f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x1794F4u, 0x1794FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1794FCu;
label_1794fc:
    // 0x1794fc: 0x0  nop
    ctx->pc = 0x1794fcu;
    // NOP
label_179500:
    // 0x179500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x179500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179508: 0x3e00008  jr          $ra
    ctx->pc = 0x179508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179508u;
        // 0x17950c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179510u;
}
