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

// Function: sub_001A4A10
// Address: 0x1a4a10 - 0x1a4ae4
void sub_001A4A10_0x1a4a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4A10_0x1a4a10");
#endif

    switch (ctx->pc) {
        case 0x1a4a2cu: goto label_1a4a2c;
        case 0x1a4a3cu: goto label_1a4a3c;
        case 0x1a4a4cu: goto label_1a4a4c;
        case 0x1a4a5cu: goto label_1a4a5c;
        case 0x1a4a6cu: goto label_1a4a6c;
        case 0x1a4a7cu: goto label_1a4a7c;
        case 0x1a4ab8u: goto label_1a4ab8;
        case 0x1a4accu: goto label_1a4acc;
        case 0x1a4ad4u: goto label_1a4ad4;
        default: break;
    }

    ctx->pc = 0x1a4a10u;

    // 0x1a4a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a4a1c: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x1a4a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1a4a20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a4a24: 0xc049590  jal         func_125640
    ctx->pc = 0x1A4A24u;
    SET_GPR_U32(ctx, 31, 0x1A4A2Cu);
    ctx->pc = 0x1A4A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4A24u;
    // 0x1a4a28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1A4A24u, 0x1A4A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A2Cu;
label_1a4a2c:
    // 0x1a4a2c: 0x26042000  addiu       $a0, $s0, 0x2000
    ctx->pc = 0x1a4a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x1a4a30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a34: 0xc049590  jal         func_125640
    ctx->pc = 0x1A4A34u;
    SET_GPR_U32(ctx, 31, 0x1A4A3Cu);
    ctx->pc = 0x1A4A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4A34u;
    // 0x1a4a38: 0x24065400  addiu       $a2, $zero, 0x5400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1A4A34u, 0x1A4A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A3Cu;
label_1a4a3c:
    // 0x1a4a3c: 0x26047808  addiu       $a0, $s0, 0x7808
    ctx->pc = 0x1a4a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 30728));
    // 0x1a4a40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a44: 0xc049590  jal         func_125640
    ctx->pc = 0x1A4A44u;
    SET_GPR_U32(ctx, 31, 0x1A4A4Cu);
    ctx->pc = 0x1A4A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4A44u;
    // 0x1a4a48: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1A4A44u, 0x1A4A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A4Cu;
label_1a4a4c:
    // 0x1a4a4c: 0x26047800  addiu       $a0, $s0, 0x7800
    ctx->pc = 0x1a4a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 30720));
    // 0x1a4a50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a54: 0xc049590  jal         func_125640
    ctx->pc = 0x1A4A54u;
    SET_GPR_U32(ctx, 31, 0x1A4A5Cu);
    ctx->pc = 0x1A4A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4A54u;
    // 0x1a4a58: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1A4A54u, 0x1A4A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A5Cu;
label_1a4a5c:
    // 0x1a4a5c: 0x26047820  addiu       $a0, $s0, 0x7820
    ctx->pc = 0x1a4a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 30752));
    // 0x1a4a60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a64: 0xc049590  jal         func_125640
    ctx->pc = 0x1A4A64u;
    SET_GPR_U32(ctx, 31, 0x1A4A6Cu);
    ctx->pc = 0x1A4A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4A64u;
    // 0x1a4a68: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1A4A64u, 0x1A4A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A6Cu;
label_1a4a6c:
    // 0x1a4a6c: 0x26047850  addiu       $a0, $s0, 0x7850
    ctx->pc = 0x1a4a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 30800));
    // 0x1a4a70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a74: 0xc049590  jal         func_125640
    ctx->pc = 0x1A4A74u;
    SET_GPR_U32(ctx, 31, 0x1A4A7Cu);
    ctx->pc = 0x1A4A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4A74u;
    // 0x1a4a78: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1A4A74u, 0x1A4A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A7Cu;
label_1a4a7c:
    // 0x1a4a7c: 0xae0078c0  sw          $zero, 0x78C0($s0)
    ctx->pc = 0x1a4a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 30912), GPR_U32(ctx, 0));
    // 0x1a4a80: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x1a4a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1a4a84: 0xae0078cc  sw          $zero, 0x78CC($s0)
    ctx->pc = 0x1a4a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 30924), GPR_U32(ctx, 0));
    // 0x1a4a88: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1a4a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1a4a8c: 0xae0378c4  sw          $v1, 0x78C4($s0)
    ctx->pc = 0x1a4a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 30916), GPR_U32(ctx, 3));
    // 0x1a4a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a94: 0xae0278c8  sw          $v0, 0x78C8($s0)
    ctx->pc = 0x1a4a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 30920), GPR_U32(ctx, 2));
    // 0x1a4a98: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a4a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a4a9c: 0xae0078b8  sw          $zero, 0x78B8($s0)
    ctx->pc = 0x1a4a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 30904), GPR_U32(ctx, 0));
    // 0x1a4aa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4aa4: 0xae0378b4  sw          $v1, 0x78B4($s0)
    ctx->pc = 0x1a4aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 30900), GPR_U32(ctx, 3));
    // 0x1a4aa8: 0xa2027846  sb          $v0, 0x7846($s0)
    ctx->pc = 0x1a4aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 30790), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a4aac: 0xa2007844  sb          $zero, 0x7844($s0)
    ctx->pc = 0x1a4aacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 30788), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4ab0: 0xc0705d4  jal         func_1C1750
    ctx->pc = 0x1A4AB0u;
    SET_GPR_U32(ctx, 31, 0x1A4AB8u);
    ctx->pc = 0x1A4AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4AB0u;
    // 0x1a4ab4: 0xa2007845  sb          $zero, 0x7845($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 30789), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1750u, 0x1A4AB0u, 0x1A4AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AB8u;
label_1a4ab8:
    // 0x1a4ab8: 0xae0278d0  sw          $v0, 0x78D0($s0)
    ctx->pc = 0x1a4ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 30928), GPR_U32(ctx, 2));
    // 0x1a4abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ac0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a4ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4ac4: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x1A4AC4u;
    SET_GPR_U32(ctx, 31, 0x1A4ACCu);
    ctx->pc = 0x1A4AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4AC4u;
    // 0x1a4ac8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x1A4AC4u, 0x1A4ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4ACCu;
label_1a4acc:
    // 0x1a4acc: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1A4ACCu;
    SET_GPR_U32(ctx, 31, 0x1A4AD4u);
    ctx->pc = 0x1A4AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4ACCu;
    // 0x1a4ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1A4ACCu, 0x1A4AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AD4u;
label_1a4ad4:
    // 0x1a4ad4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4ad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4adc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4ADCu;
        // 0x1a4ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4AE4u;
}
