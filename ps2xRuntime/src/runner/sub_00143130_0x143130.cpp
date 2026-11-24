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

// Function: sub_00143130
// Address: 0x143130 - 0x143200
void sub_00143130_0x143130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143130_0x143130");
#endif

    switch (ctx->pc) {
        case 0x14319cu: goto label_14319c;
        default: break;
    }

    ctx->pc = 0x143130u;

    // 0x143130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x143134: 0x3c02b400  lui         $v0, 0xB400
    ctx->pc = 0x143134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46080 << 16));
    // 0x143138: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x143138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14313c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x14313cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x143140: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143144: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x143144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x143148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14314c: 0x3c024214  lui         $v0, 0x4214
    ctx->pc = 0x14314cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16916 << 16));
    // 0x143150: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x143150u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143154: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x143154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x143158: 0x34462160  ori         $a2, $v0, 0x2160
    ctx->pc = 0x143158u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8544);
    // 0x14315c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14315cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143160: 0x70031389  pcpyld      $v0, $zero, $v1
    ctx->pc = 0x143160u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x143164: 0x24030421  addiu       $v1, $zero, 0x421
    ctx->pc = 0x143164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1057));
    // 0x143168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14316c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x14316cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x143170: 0x81142  srl         $v0, $t0, 5
    ctx->pc = 0x143170u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 5));
    // 0x143174: 0x30470010  andi        $a3, $v0, 0x10
    ctx->pc = 0x143174u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x143178: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x143178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x14317c: 0x310207ff  andi        $v0, $t0, 0x7FF
    ctx->pc = 0x14317cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
    // 0x143180: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x143180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x143184: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x143184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x143188: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x143188u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x14318c: 0x94850014  lhu         $a1, 0x14($a0)
    ctx->pc = 0x14318cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x143190: 0x94860016  lhu         $a2, 0x16($a0)
    ctx->pc = 0x143190u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x143194: 0xc04cfd8  jal         func_133F60
    ctx->pc = 0x143194u;
    SET_GPR_U32(ctx, 31, 0x14319Cu);
    ctx->pc = 0x143198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143194u;
    // 0x143198: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x143194u, 0x14319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14319Cu;
label_14319c:
    // 0x14319c: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x14319cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x1431a0: 0xde060020  ld          $a2, 0x20($s0)
    ctx->pc = 0x1431a0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1431a4: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x1431a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1431a8: 0xde050028  ld          $a1, 0x28($s0)
    ctx->pc = 0x1431a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1431ac: 0xde040050  ld          $a0, 0x50($s0)
    ctx->pc = 0x1431acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1431b0: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x1431b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1431b4: 0xfe230020  sd          $v1, 0x20($s1)
    ctx->pc = 0x1431b4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 3));
    // 0x1431b8: 0xfe260028  sd          $a2, 0x28($s1)
    ctx->pc = 0x1431b8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 6));
    // 0x1431bc: 0xfe250030  sd          $a1, 0x30($s1)
    ctx->pc = 0x1431bcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 5));
    // 0x1431c0: 0xfe240038  sd          $a0, 0x38($s1)
    ctx->pc = 0x1431c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 4));
    // 0x1431c4: 0xde060038  ld          $a2, 0x38($s0)
    ctx->pc = 0x1431c4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1431c8: 0xde050058  ld          $a1, 0x58($s0)
    ctx->pc = 0x1431c8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1431cc: 0xde040040  ld          $a0, 0x40($s0)
    ctx->pc = 0x1431ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1431d0: 0xde070048  ld          $a3, 0x48($s0)
    ctx->pc = 0x1431d0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1431d4: 0xde030030  ld          $v1, 0x30($s0)
    ctx->pc = 0x1431d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1431d8: 0xfe230040  sd          $v1, 0x40($s1)
    ctx->pc = 0x1431d8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 3));
    // 0x1431dc: 0xfe260048  sd          $a2, 0x48($s1)
    ctx->pc = 0x1431dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 6));
    // 0x1431e0: 0xfe250050  sd          $a1, 0x50($s1)
    ctx->pc = 0x1431e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 5));
    // 0x1431e4: 0xfe240058  sd          $a0, 0x58($s1)
    ctx->pc = 0x1431e4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 4));
    // 0x1431e8: 0xfe270060  sd          $a3, 0x60($s1)
    ctx->pc = 0x1431e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 7));
    // 0x1431ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1431ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1431f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1431f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1431f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1431f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1431f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1431F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1431FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431F8u;
        // 0x1431fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1431F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143200u;
}
