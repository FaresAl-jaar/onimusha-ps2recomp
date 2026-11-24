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

// Function: sub_00143200
// Address: 0x143200 - 0x1432ec
void sub_00143200_0x143200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143200_0x143200");
#endif

    switch (ctx->pc) {
        case 0x143270u: goto label_143270;
        default: break;
    }

    ctx->pc = 0x143200u;

    // 0x143200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x143204: 0x3c02e400  lui         $v0, 0xE400
    ctx->pc = 0x143204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58368 << 16));
    // 0x143208: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x143208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14320c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x14320cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x143210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143214: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x143214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x143218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14321c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x14321cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x143220: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x143220u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143224: 0x3c024214  lui         $v0, 0x4214
    ctx->pc = 0x143224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16916 << 16));
    // 0x143228: 0x34462160  ori         $a2, $v0, 0x2160
    ctx->pc = 0x143228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8544);
    // 0x14322c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14322cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143230: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x143230u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x143234: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x143234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x143238: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14323c: 0x83942  srl         $a3, $t0, 5
    ctx->pc = 0x14323cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 5));
    // 0x143240: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x143240u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x143244: 0x30e70010  andi        $a3, $a3, 0x10
    ctx->pc = 0x143244u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x143248: 0x34431421  ori         $v1, $v0, 0x1421
    ctx->pc = 0x143248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5153);
    // 0x14324c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x14324cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x143250: 0x310207ff  andi        $v0, $t0, 0x7FF
    ctx->pc = 0x143250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
    // 0x143254: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x143254u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x143258: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x143258u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x14325c: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x14325cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x143260: 0x94850014  lhu         $a1, 0x14($a0)
    ctx->pc = 0x143260u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x143264: 0x94860016  lhu         $a2, 0x16($a0)
    ctx->pc = 0x143264u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x143268: 0xc04cfd8  jal         func_133F60
    ctx->pc = 0x143268u;
    SET_GPR_U32(ctx, 31, 0x143270u);
    ctx->pc = 0x14326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143268u;
    // 0x14326c: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x143268u, 0x143270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143270u;
label_143270:
    // 0x143270: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x143270u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x143274: 0xde060018  ld          $a2, 0x18($s0)
    ctx->pc = 0x143274u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x143278: 0x26220080  addiu       $v0, $s1, 0x80
    ctx->pc = 0x143278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x14327c: 0xde050020  ld          $a1, 0x20($s0)
    ctx->pc = 0x14327cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x143280: 0xde040028  ld          $a0, 0x28($s0)
    ctx->pc = 0x143280u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x143284: 0xde030030  ld          $v1, 0x30($s0)
    ctx->pc = 0x143284u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x143288: 0xfe260020  sd          $a2, 0x20($s1)
    ctx->pc = 0x143288u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 6));
    // 0x14328c: 0xfe250028  sd          $a1, 0x28($s1)
    ctx->pc = 0x14328cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 5));
    // 0x143290: 0xfe240030  sd          $a0, 0x30($s1)
    ctx->pc = 0x143290u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 4));
    // 0x143294: 0xfe230038  sd          $v1, 0x38($s1)
    ctx->pc = 0x143294u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 3));
    // 0x143298: 0xde060040  ld          $a2, 0x40($s0)
    ctx->pc = 0x143298u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x14329c: 0xde050048  ld          $a1, 0x48($s0)
    ctx->pc = 0x14329cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1432a0: 0xde040050  ld          $a0, 0x50($s0)
    ctx->pc = 0x1432a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1432a4: 0xde030038  ld          $v1, 0x38($s0)
    ctx->pc = 0x1432a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1432a8: 0xfe230040  sd          $v1, 0x40($s1)
    ctx->pc = 0x1432a8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 3));
    // 0x1432ac: 0xfe260048  sd          $a2, 0x48($s1)
    ctx->pc = 0x1432acu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 6));
    // 0x1432b0: 0xfe250050  sd          $a1, 0x50($s1)
    ctx->pc = 0x1432b0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 5));
    // 0x1432b4: 0xfe240058  sd          $a0, 0x58($s1)
    ctx->pc = 0x1432b4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 4));
    // 0x1432b8: 0xde060060  ld          $a2, 0x60($s0)
    ctx->pc = 0x1432b8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1432bc: 0xde050068  ld          $a1, 0x68($s0)
    ctx->pc = 0x1432bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1432c0: 0xde040070  ld          $a0, 0x70($s0)
    ctx->pc = 0x1432c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1432c4: 0xde030058  ld          $v1, 0x58($s0)
    ctx->pc = 0x1432c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1432c8: 0xfe230060  sd          $v1, 0x60($s1)
    ctx->pc = 0x1432c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 3));
    // 0x1432cc: 0xfe260068  sd          $a2, 0x68($s1)
    ctx->pc = 0x1432ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 6));
    // 0x1432d0: 0xfe250070  sd          $a1, 0x70($s1)
    ctx->pc = 0x1432d0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 5));
    // 0x1432d4: 0xfe240078  sd          $a0, 0x78($s1)
    ctx->pc = 0x1432d4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 4));
    // 0x1432d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1432d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1432dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1432dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1432e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1432e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1432e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1432E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1432E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1432E4u;
        // 0x1432e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1432E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1432ECu;
}
