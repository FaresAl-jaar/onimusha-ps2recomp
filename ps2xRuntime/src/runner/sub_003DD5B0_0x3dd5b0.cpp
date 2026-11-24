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

// Function: sub_003DD5B0
// Address: 0x3dd5b0 - 0x3dd6b0
void sub_003DD5B0_0x3dd5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD5B0_0x3dd5b0");
#endif

    switch (ctx->pc) {
        case 0x3dd600u: goto label_3dd600;
        case 0x3dd640u: goto label_3dd640;
        case 0x3dd668u: goto label_3dd668;
        default: break;
    }

    ctx->pc = 0x3dd5b0u;

    // 0x3dd5b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3dd5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3dd5b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3dd5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3dd5b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3dd5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3dd5bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3dd5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3dd5c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3dd5c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd5c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3dd5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3dd5c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3dd5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3dd5cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3dd5ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3dd5d0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3dd5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3dd5d4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3dd5d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3dd5d8: 0x90850018  lbu         $a1, 0x18($a0)
    ctx->pc = 0x3dd5d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3dd5dc: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x3dd5dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dd5e0: 0x8c640080  lw          $a0, 0x80($v1)
    ctx->pc = 0x3dd5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x3dd5e4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3dd5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3dd5e8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3dd5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3dd5ec: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3dd5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3dd5f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3dd5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3dd5f4: 0x8c7200c0  lw          $s2, 0xC0($v1)
    ctx->pc = 0x3dd5f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x3dd5f8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3DD5F8u;
    {
        const bool branch_taken_0x3dd5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD5F8u;
        // 0x3dd5fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd5f8) {
            ctx->pc = 0x3DD678u;
            goto label_3dd678;
        }
    }
    ctx->pc = 0x3DD600u;
label_3dd600:
    // 0x3dd600: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3dd600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3dd604: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x3dd604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dd608: 0x2442e6b0  addiu       $v0, $v0, -0x1950
    ctx->pc = 0x3dd608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960816));
    // 0x3dd60c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3dd60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dd610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dd610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd614: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3dd614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd618: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x3dd618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x3dd61c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3dd61cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E6B0u));
    // 0x3dd620: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x3dd620u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3dd624: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x3dd624u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x3dd628: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3dd628u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3dd62c: 0x9262001c  lbu         $v0, 0x1C($s3)
    ctx->pc = 0x3dd62cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x3dd630: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3dd630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3dd634: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3dd634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3dd638: 0xc041442  jal         func_105108
    ctx->pc = 0x3DD638u;
    SET_GPR_U32(ctx, 31, 0x3DD640u);
    ctx->pc = 0x3DD63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD638u;
    // 0x3dd63c: 0xe4400060  swc1        $f0, 0x60($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3DD638u, 0x3DD640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD640u;
label_3dd640:
    // 0x3dd640: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x3dd640u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x3dd644: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x3dd644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3dd648: 0x9262001d  lbu         $v0, 0x1D($s3)
    ctx->pc = 0x3dd648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 29)));
    // 0x3dd64c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3dd64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3dd650: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3dd650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3dd654: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3dd654u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3dd658: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3dd658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3dd65c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x3dd65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3dd660: 0xc041472  jal         func_1051C8
    ctx->pc = 0x3DD660u;
    SET_GPR_U32(ctx, 31, 0x3DD668u);
    ctx->pc = 0x3DD664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD660u;
    // 0x3dd664: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x3DD660u, 0x3DD668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD668u;
label_3dd668:
    // 0x3dd668: 0xe634001c  swc1        $f20, 0x1C($s1)
    ctx->pc = 0x3dd668u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x3dd66c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3dd66cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3dd670: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x3dd670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x3dd674: 0x0  nop
    ctx->pc = 0x3dd674u;
    // NOP
label_3dd678:
    // 0x3dd678: 0x9263001a  lbu         $v1, 0x1A($s3)
    ctx->pc = 0x3dd678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x3dd67c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3dd67cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dd680: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3DD680u;
    {
        const bool branch_taken_0x3dd680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd680) {
            ctx->pc = 0x3DD600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd600;
        }
    }
    ctx->pc = 0x3DD688u;
    // 0x3dd688: 0xe6740010  swc1        $f20, 0x10($s3)
    ctx->pc = 0x3dd688u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x3dd68c: 0xe6740014  swc1        $f20, 0x14($s3)
    ctx->pc = 0x3dd68cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x3dd690: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3dd690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3dd694: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3dd694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3dd698: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3dd698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3dd69c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3dd69cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dd6a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3dd6a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dd6a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3dd6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dd6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD6A8u;
        // 0x3dd6ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD6B0u;
}
