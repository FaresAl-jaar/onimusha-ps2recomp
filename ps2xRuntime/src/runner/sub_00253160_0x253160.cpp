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

// Function: sub_00253160
// Address: 0x253160 - 0x253270
void sub_00253160_0x253160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253160_0x253160");
#endif

    switch (ctx->pc) {
        case 0x253190u: goto label_253190;
        case 0x2531b0u: goto label_2531b0;
        case 0x2531c8u: goto label_2531c8;
        case 0x2531ecu: goto label_2531ec;
        case 0x253210u: goto label_253210;
        default: break;
    }

    ctx->pc = 0x253160u;

    // 0x253160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253164: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x253164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x253168: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x253168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x25316c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25316cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253174: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x253174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x253178: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x253178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25317c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25317cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x253180: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x253180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253184: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x253184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x253188: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x253188u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25318c: 0x2a420020  slti        $v0, $s2, 0x20
    ctx->pc = 0x25318cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
label_253190:
    // 0x253190: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x253190u;
    {
        const bool branch_taken_0x253190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253190u;
        // 0x253194: 0x3c020089  lui         $v0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253190) {
            ctx->pc = 0x2531DCu;
            goto label_2531dc;
        }
    }
    ctx->pc = 0x253198u;
    // 0x253198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25319c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x25319cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2531a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2531a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2531a4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2531a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2531a8: 0xc04b398  jal         func_12CE60
    ctx->pc = 0x2531A8u;
    SET_GPR_U32(ctx, 31, 0x2531B0u);
    ctx->pc = 0x2531ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2531A8u;
    // 0x2531ac: 0x2628821  addu        $s1, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE60u, 0x2531A8u, 0x2531B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2531B0u;
label_2531b0:
    // 0x2531b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2531b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2531b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2531b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2531b8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2531b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2531bc: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2531bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2531c0: 0xc04b1a2  jal         func_12C688
    ctx->pc = 0x2531C0u;
    SET_GPR_U32(ctx, 31, 0x2531C8u);
    ctx->pc = 0x2531C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2531C0u;
    // 0x2531c4: 0x66520001  daddiu      $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C688u, 0x2531C0u, 0x2531C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2531C8u;
label_2531c8:
    // 0x2531c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2531c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2531cc: 0x1600fff0  bnez        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2531CCu;
    {
        const bool branch_taken_0x2531cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2531D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531CCu;
        // 0x2531d0: 0x2a420020  slti        $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531cc) {
            ctx->pc = 0x253190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253190;
        }
    }
    ctx->pc = 0x2531D4u;
    // 0x2531d4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2531d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2531d8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x2531d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_2531dc:
    // 0x2531dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2531dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2531e0: 0x245086c0  addiu       $s0, $v0, -0x7940
    ctx->pc = 0x2531e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936256));
    // 0x2531e4: 0xc049f18  jal         func_127C60
    ctx->pc = 0x2531E4u;
    SET_GPR_U32(ctx, 31, 0x2531ECu);
    ctx->pc = 0x2531E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2531E4u;
    // 0x2531e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x2531E4u, 0x2531ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2531ECu;
label_2531ec:
    // 0x2531ec: 0x6683ffff  daddiu      $v1, $s4, -0x1
    ctx->pc = 0x2531ecu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)4294967295);
    // 0x2531f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2531f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2531f4: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x2531f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2531f8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2531f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2531fc: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2531fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x253200: 0x18a0000f  blez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x253200u;
    {
        const bool branch_taken_0x253200 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x253200) {
            ctx->pc = 0x253240u;
            goto label_253240;
        }
    }
    ctx->pc = 0x253208u;
    // 0x253208: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x253208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25320c: 0x64a6ffff  daddiu      $a2, $a1, -0x1
    ctx->pc = 0x25320cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_253210:
    // 0x253210: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x253210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x253214: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x253214u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x253218: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x253218u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x25321c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x25321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x253220: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x253220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x253224: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x253224u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x253228: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x253228u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25322c: 0x66520001  daddiu      $s2, $s2, 0x1
    ctx->pc = 0x25322cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)1);
    // 0x253230: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x253230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x253234: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x253234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x253238: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x253238u;
    {
        const bool branch_taken_0x253238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253238u;
        // 0x25323c: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253238) {
            ctx->pc = 0x253210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253210;
        }
    }
    ctx->pc = 0x253240u;
label_253240:
    // 0x253240: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x253240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x253244: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x253244u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x253248: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x253248u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25324c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x25324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x253250: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x253250u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x253258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25325c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x25325cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253260: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x253260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x253264: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x253264u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x253268: 0x3e00008  jr          $ra
    ctx->pc = 0x253268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253268u;
        // 0x25326c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253270u;
}
