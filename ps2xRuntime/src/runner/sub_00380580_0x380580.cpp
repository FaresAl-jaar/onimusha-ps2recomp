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

// Function: sub_00380580
// Address: 0x380580 - 0x380618
void sub_00380580_0x380580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380580_0x380580");
#endif

    switch (ctx->pc) {
        case 0x380594u: goto label_380594;
        case 0x3805a0u: goto label_3805a0;
        default: break;
    }

    ctx->pc = 0x380580u;

    // 0x380580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x380580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x380584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x380584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x380588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x380588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38058c: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x38058Cu;
    SET_GPR_U32(ctx, 31, 0x380594u);
    ctx->pc = 0x380590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38058Cu;
    // 0x380590: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x38058Cu, 0x380594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380594u;
label_380594:
    // 0x380594: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x380594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x380598: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x380598u;
    SET_GPR_U32(ctx, 31, 0x3805A0u);
    ctx->pc = 0x38059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380598u;
    // 0x38059c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x380598u, 0x3805A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3805A0u;
label_3805a0:
    // 0x3805a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3805a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3805a4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3805a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3805a8: 0x2c610046  sltiu       $at, $v1, 0x46
    ctx->pc = 0x3805a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
    // 0x3805ac: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3805ACu;
    {
        const bool branch_taken_0x3805ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3805ac) {
            ctx->pc = 0x3805C0u;
            goto label_3805c0;
        }
    }
    ctx->pc = 0x3805B4u;
    // 0x3805b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3805B4u;
    {
        const bool branch_taken_0x3805b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3805B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3805B4u;
        // 0x3805b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3805b4) {
            ctx->pc = 0x3805F8u;
            goto label_3805f8;
        }
    }
    ctx->pc = 0x3805BCu;
    // 0x3805bc: 0x0  nop
    ctx->pc = 0x3805bcu;
    // NOP
label_3805c0:
    // 0x3805c0: 0x2c610055  sltiu       $at, $v1, 0x55
    ctx->pc = 0x3805c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x3805c4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3805C4u;
    {
        const bool branch_taken_0x3805c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3805c4) {
            ctx->pc = 0x3805D8u;
            goto label_3805d8;
        }
    }
    ctx->pc = 0x3805CCu;
    // 0x3805cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3805CCu;
    {
        const bool branch_taken_0x3805cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3805D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3805CCu;
        // 0x3805d0: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3805cc) {
            ctx->pc = 0x3805F8u;
            goto label_3805f8;
        }
    }
    ctx->pc = 0x3805D4u;
    // 0x3805d4: 0x0  nop
    ctx->pc = 0x3805d4u;
    // NOP
label_3805d8:
    // 0x3805d8: 0x2c61005f  sltiu       $at, $v1, 0x5F
    ctx->pc = 0x3805d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)95) ? 1 : 0);
    // 0x3805dc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3805DCu;
    {
        const bool branch_taken_0x3805dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3805dc) {
            ctx->pc = 0x3805F0u;
            goto label_3805f0;
        }
    }
    ctx->pc = 0x3805E4u;
    // 0x3805e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3805E4u;
    {
        const bool branch_taken_0x3805e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3805E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3805E4u;
        // 0x3805e8: 0x64030002  daddiu      $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3805e4) {
            ctx->pc = 0x3805F8u;
            goto label_3805f8;
        }
    }
    ctx->pc = 0x3805ECu;
    // 0x3805ec: 0x0  nop
    ctx->pc = 0x3805ecu;
    // NOP
label_3805f0:
    // 0x3805f0: 0x64030003  daddiu      $v1, $zero, 0x3
    ctx->pc = 0x3805f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x3805f4: 0x0  nop
    ctx->pc = 0x3805f4u;
    // NOP
label_3805f8:
    // 0x3805f8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3805f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3805fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3805fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x380600: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x380600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x380604: 0xa2032bbc  sb          $v1, 0x2BBC($s0)
    ctx->pc = 0x380604u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11196), (uint8_t)GPR_U32(ctx, 3));
    // 0x380608: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x380608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38060c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38060cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380610: 0x3e00008  jr          $ra
    ctx->pc = 0x380610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380610u;
        // 0x380614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380618u;
}
