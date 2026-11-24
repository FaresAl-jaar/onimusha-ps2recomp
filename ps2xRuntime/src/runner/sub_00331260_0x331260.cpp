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

// Function: sub_00331260
// Address: 0x331260 - 0x3312e0
void sub_00331260_0x331260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331260_0x331260");
#endif

    switch (ctx->pc) {
        case 0x33129cu: goto label_33129c;
        case 0x3312c8u: goto label_3312c8;
        default: break;
    }

    ctx->pc = 0x331260u;

    // 0x331260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x331260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x331264: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x331264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x331268: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x331268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33126c: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x33126cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x331270: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x331270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x331274: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x331274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x331278: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x331278u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33127c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33127cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x331280: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x331280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331284: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x331284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x331288: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x331288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33128c: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x33128cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x331290: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x331290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x331294: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x331294u;
    SET_GPR_U32(ctx, 31, 0x33129Cu);
    ctx->pc = 0x331298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331294u;
    // 0x331298: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x331294u, 0x33129Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33129Cu;
label_33129c:
    // 0x33129c: 0x2643000a  addiu       $v1, $s2, 0xA
    ctx->pc = 0x33129cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x3312a0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3312a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3312a4: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3312a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3312a8: 0x3226ffff  andi        $a2, $s1, 0xFFFF
    ctx->pc = 0x3312a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3312ac: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x3312acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3312b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3312b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3312b4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3312b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3312b8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3312b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3312bc: 0x2529cdf8  addiu       $t1, $t1, -0x3208
    ctx->pc = 0x3312bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954488));
    // 0x3312c0: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3312C0u;
    SET_GPR_U32(ctx, 31, 0x3312C8u);
    ctx->pc = 0x3312C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3312C0u;
    // 0x3312c4: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3312C0u, 0x3312C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3312C8u;
label_3312c8:
    // 0x3312c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3312c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3312cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3312ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3312d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3312d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3312d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3312d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3312d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3312D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3312DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3312D8u;
        // 0x3312dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3312D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3312E0u;
}
