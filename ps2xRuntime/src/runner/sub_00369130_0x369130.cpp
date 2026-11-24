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

// Function: sub_00369130
// Address: 0x369130 - 0x369220
void sub_00369130_0x369130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369130_0x369130");
#endif

    switch (ctx->pc) {
        case 0x369178u: goto label_369178;
        case 0x3691acu: goto label_3691ac;
        case 0x3691d4u: goto label_3691d4;
        default: break;
    }

    ctx->pc = 0x369130u;

    // 0x369130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x369130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x369134: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x369134u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x369138: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x369138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x36913c: 0x250890c0  addiu       $t0, $t0, -0x6F40
    ctx->pc = 0x36913cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938816));
    // 0x369140: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x369140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x369144: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x369144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x369148: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x369148u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36914c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36914cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x369150: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x369150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369154: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x369154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x369158: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x369158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36915c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x36915cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369160: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x369160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369168: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x369168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36916c: 0x240705a0  addiu       $a3, $zero, 0x5A0
    ctx->pc = 0x36916cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
    // 0x369170: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x369170u;
    SET_GPR_U32(ctx, 31, 0x369178u);
    ctx->pc = 0x369174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369170u;
    // 0x369174: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x369170u, 0x369178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369178u;
label_369178:
    // 0x369178: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x369178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36917c: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x36917Cu;
    {
        const bool branch_taken_0x36917c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36917c) {
            ctx->pc = 0x3691F8u;
            goto label_3691f8;
        }
    }
    ctx->pc = 0x369184u;
    // 0x369184: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x369184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x369188: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x369188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36918c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x36918cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369190: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x369190u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x369194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369198: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x369198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x36919c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x36919cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3691a0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3691a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3691a4: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3691A4u;
    SET_GPR_U32(ctx, 31, 0x3691ACu);
    ctx->pc = 0x3691A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3691A4u;
    // 0x3691a8: 0x244a0030  addiu       $t2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3691A4u, 0x3691ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3691ACu;
label_3691ac:
    // 0x3691ac: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3691acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3691b0: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3691b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3691b4: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x3691b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x3691b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3691b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3691bc: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3691bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3691c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3691c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3691c4: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3691c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3691c8: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3691c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3691cc: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3691CCu;
    SET_GPR_U32(ctx, 31, 0x3691D4u);
    ctx->pc = 0x3691D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3691CCu;
    // 0x3691d0: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3691CCu, 0x3691D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3691D4u;
label_3691d4:
    // 0x3691d4: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3691d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3691d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3691d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3691dc: 0xae000554  sw          $zero, 0x554($s0)
    ctx->pc = 0x3691dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 0));
    // 0x3691e0: 0xae000558  sw          $zero, 0x558($s0)
    ctx->pc = 0x3691e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 0));
    // 0x3691e4: 0xae020590  sw          $v0, 0x590($s0)
    ctx->pc = 0x3691e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 2));
    // 0x3691e8: 0xa2110594  sb          $s1, 0x594($s0)
    ctx->pc = 0x3691e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1428), (uint8_t)GPR_U32(ctx, 17));
    // 0x3691ec: 0xa2000595  sb          $zero, 0x595($s0)
    ctx->pc = 0x3691ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1429), (uint8_t)GPR_U32(ctx, 0));
    // 0x3691f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3691F0u;
    {
        const bool branch_taken_0x3691f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3691F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3691F0u;
        // 0x3691f4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3691f0) {
            ctx->pc = 0x369200u;
            goto label_369200;
        }
    }
    ctx->pc = 0x3691F8u;
label_3691f8:
    // 0x3691f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3691f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3691fc: 0x0  nop
    ctx->pc = 0x3691fcu;
    // NOP
label_369200:
    // 0x369200: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x369200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x369204: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x369204u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x369208: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x369208u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36920c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36920cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x369210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x369214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369218: 0x3e00008  jr          $ra
    ctx->pc = 0x369218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369218u;
        // 0x36921c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369220u;
}
