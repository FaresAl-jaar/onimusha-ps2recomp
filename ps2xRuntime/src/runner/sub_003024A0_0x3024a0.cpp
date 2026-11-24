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

// Function: sub_003024A0
// Address: 0x3024a0 - 0x302574
void sub_003024A0_0x3024a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003024A0_0x3024a0");
#endif

    switch (ctx->pc) {
        case 0x3024fcu: goto label_3024fc;
        case 0x30252cu: goto label_30252c;
        default: break;
    }

    ctx->pc = 0x3024a0u;

    // 0x3024a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3024a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3024a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3024a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3024a8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3024a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3024ac: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3024acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3024b0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3024b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3024b4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3024b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3024b8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3024b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3024bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3024bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3024c0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3024c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3024c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3024c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3024c8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3024c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3024cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3024ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3024d0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3024d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3024d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3024d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3024d8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3024d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3024dc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3024dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3024e0: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x3024e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3024e4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3024e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3024e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3024e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3024ec: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x3024ecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x3024f0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x3024f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x3024f4: 0xc0c0818  jal         func_302060
    ctx->pc = 0x3024F4u;
    SET_GPR_U32(ctx, 31, 0x3024FCu);
    ctx->pc = 0x3024F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3024F4u;
    // 0x3024f8: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x3024F4u, 0x3024FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3024FCu;
label_3024fc:
    // 0x3024fc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3024FCu;
    {
        const bool branch_taken_0x3024fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024FCu;
        // 0x302500: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3024fc) {
            ctx->pc = 0x302538u;
            goto label_302538;
        }
    }
    ctx->pc = 0x302504u;
    // 0x302504: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x302504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302508: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x302508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30250c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x30250cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302510: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x302510u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x302514: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x302514u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302518: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x302518u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x30251c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x30251cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302520: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x302520u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x302524: 0xc0c07c4  jal         func_301F10
    ctx->pc = 0x302524u;
    SET_GPR_U32(ctx, 31, 0x30252Cu);
    ctx->pc = 0x302528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302524u;
    // 0x302528: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301F10u, 0x302524u, 0x30252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30252Cu;
label_30252c:
    // 0x30252c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30252Cu;
    {
        const bool branch_taken_0x30252c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30252Cu;
        // 0x302530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30252c) {
            ctx->pc = 0x302540u;
            goto label_302540;
        }
    }
    ctx->pc = 0x302534u;
    // 0x302534: 0x0  nop
    ctx->pc = 0x302534u;
    // NOP
label_302538:
    // 0x302538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x302538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30253c: 0x0  nop
    ctx->pc = 0x30253cu;
    // NOP
label_302540:
    // 0x302540: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x302540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x302544: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x302544u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x302548: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x302548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x30254c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x30254cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x302550: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x302550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x302554: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x302554u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x302558: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x302558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30255c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30255cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x302560: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x302560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302564: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x302564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302568: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x302568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30256c: 0x3e00008  jr          $ra
    ctx->pc = 0x30256Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30256Cu;
        // 0x302570: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30256Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302574u;
}
