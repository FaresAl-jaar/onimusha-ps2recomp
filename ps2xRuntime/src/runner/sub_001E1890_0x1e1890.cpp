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

// Function: sub_001E1890
// Address: 0x1e1890 - 0x1e1928
void sub_001E1890_0x1e1890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1890_0x1e1890");
#endif

    switch (ctx->pc) {
        case 0x1e1910u: goto label_1e1910;
        default: break;
    }

    ctx->pc = 0x1e1890u;

    // 0x1e1890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1894: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1e1894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e1898: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e189c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e189cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e18a0: 0x84c3000a  lh          $v1, 0xA($a2)
    ctx->pc = 0x1e18a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x1e18a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e18a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e18a8: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x1e18a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1e18ac: 0x84c80008  lh          $t0, 0x8($a2)
    ctx->pc = 0x1e18acu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1e18b0: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x1e18b0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1e18b4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1e18b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1e18b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e18bc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1e18bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1e18c0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e18c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e18c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1e18c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e18c8: 0x83103  sra         $a2, $t0, 4
    ctx->pc = 0x1e18c8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 4));
    // 0x1e18cc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e18ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1e18d0: 0x24c8ffff  addiu       $t0, $a2, -0x1
    ctx->pc = 0x1e18d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1e18d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e18d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1e18d8: 0x73103  sra         $a2, $a3, 4
    ctx->pc = 0x1e18d8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 4));
    // 0x1e18dc: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1e18dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1e18e0: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x1e18e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1e18e4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1e18e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e18e8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1e18e8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1e18ec: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1e18ecu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1e18f0: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1e18f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1e18f4: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1e18f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1e18f8: 0x34e7000f  ori         $a3, $a3, 0xF
    ctx->pc = 0x1e18f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)15);
    // 0x1e18fc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1e18fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1e1900: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1e1900u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1e1904: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1e1904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1e1908: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1E1908u;
    SET_GPR_U32(ctx, 31, 0x1E1910u);
    ctx->pc = 0x1E190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1908u;
    // 0x1e190c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1E1908u, 0x1E1910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1910u;
label_1e1910:
    // 0x1e1910: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e1910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e1914: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1918: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e191c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e191cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1920: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1920u;
        // 0x1e1924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1928u;
}
