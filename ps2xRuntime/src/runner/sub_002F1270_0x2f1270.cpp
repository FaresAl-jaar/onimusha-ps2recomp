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

// Function: sub_002F1270
// Address: 0x2f1270 - 0x2f12ec
void sub_002F1270_0x2f1270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1270_0x2f1270");
#endif

    switch (ctx->pc) {
        case 0x2f12a8u: goto label_2f12a8;
        case 0x2f12ccu: goto label_2f12cc;
        default: break;
    }

    ctx->pc = 0x2f1270u;

    // 0x2f1270: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f1270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f1274: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f1274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f1278: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f1278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f127c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f127cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f1280: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f1280u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1284: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f1284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f1288: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f1288u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f128c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f128cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f1290: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f1290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1294: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f1294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f1298: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f1298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f129c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2f129cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f12a0: 0xc097404  jal         func_25D010
    ctx->pc = 0x2F12A0u;
    SET_GPR_U32(ctx, 31, 0x2F12A8u);
    ctx->pc = 0x2F12A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F12A0u;
    // 0x2f12a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D010u, 0x2F12A0u, 0x2F12A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F12A8u;
label_2f12a8:
    // 0x2f12a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f12a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f12ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f12acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f12b0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2f12b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f12b4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2f12b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f12b8: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2f12b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f12bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f12bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f12c0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f12c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f12c4: 0xc0d5f64  jal         func_357D90
    ctx->pc = 0x2F12C4u;
    SET_GPR_U32(ctx, 31, 0x2F12CCu);
    ctx->pc = 0x2F12C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F12C4u;
    // 0x2f12c8: 0x240a0007  addiu       $t2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357D90u, 0x2F12C4u, 0x2F12CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F12CCu;
label_2f12cc:
    // 0x2f12cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f12ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f12d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f12d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f12d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f12d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f12d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f12d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f12dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f12dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f12e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f12e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f12e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F12E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12E4u;
        // 0x2f12e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F12E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F12ECu;
}
