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

// Function: sub_001F02C0
// Address: 0x1f02c0 - 0x1f03e0
void sub_001F02C0_0x1f02c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F02C0_0x1f02c0");
#endif

    switch (ctx->pc) {
        case 0x1f0338u: goto label_1f0338;
        case 0x1f034cu: goto label_1f034c;
        default: break;
    }

    ctx->pc = 0x1f02c0u;

    // 0x1f02c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f02c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f02c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f02c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f02c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f02c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f02cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f02ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f02d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f02d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f02d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f02d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f02d8: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x1f02d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1f02dc: 0x10a0003a  beqz        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1F02DCu;
    {
        const bool branch_taken_0x1f02dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F02E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F02DCu;
        // 0x1f02e0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f02dc) {
            ctx->pc = 0x1F03C8u;
            goto label_1f03c8;
        }
    }
    ctx->pc = 0x1F02E4u;
    // 0x1f02e4: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x1f02e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1f02e8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1f02e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f02ec: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F02ECu;
    {
        const bool branch_taken_0x1f02ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f02ec) {
            ctx->pc = 0x1F0358u;
            goto label_1f0358;
        }
    }
    ctx->pc = 0x1F02F4u;
    // 0x1f02f4: 0x90a50002  lbu         $a1, 0x2($a1)
    ctx->pc = 0x1f02f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1f02f8: 0x240422b0  addiu       $a0, $zero, 0x22B0
    ctx->pc = 0x1f02f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8880));
    // 0x1f02fc: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x1f02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x1f0300: 0x246395c0  addiu       $v1, $v1, -0x6A40
    ctx->pc = 0x1f0300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940096));
    // 0x1f0304: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1f0304u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f0308: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f0308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f030c: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x1f030cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f0310: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F0310u;
    {
        const bool branch_taken_0x1f0310 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0310u;
        // 0x1f0314: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0310) {
            ctx->pc = 0x1F0360u;
            goto label_1f0360;
        }
    }
    ctx->pc = 0x1F0318u;
    // 0x1f0318: 0x8c23ceec  lw          $v1, -0x3114($at)
    ctx->pc = 0x1f0318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954732)));
    // 0x1f031c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x1f031cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x1f0320: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F0320u;
    {
        const bool branch_taken_0x1f0320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0320) {
            ctx->pc = 0x1F0360u;
            goto label_1f0360;
        }
    }
    ctx->pc = 0x1F0328u;
    // 0x1f0328: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0328u;
    {
        const bool branch_taken_0x1f0328 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0328u;
        // 0x1f032c: 0x322500ff  andi        $a1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0328) {
            ctx->pc = 0x1F0340u;
            goto label_1f0340;
        }
    }
    ctx->pc = 0x1F0330u;
    // 0x1f0330: 0xc0a86c8  jal         func_2A1B20
    ctx->pc = 0x1F0330u;
    SET_GPR_U32(ctx, 31, 0x1F0338u);
    ctx->pc = 0x1F0334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0330u;
    // 0x1f0334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1B20u, 0x1F0330u, 0x1F0338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0338u;
label_1f0338:
    // 0x1f0338: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F0338u;
    {
        const bool branch_taken_0x1f0338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0338) {
            ctx->pc = 0x1F0360u;
            goto label_1f0360;
        }
    }
    ctx->pc = 0x1F0340u;
label_1f0340:
    // 0x1f0340: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x1f0340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1f0344: 0xc0a86d4  jal         func_2A1B50
    ctx->pc = 0x1F0344u;
    SET_GPR_U32(ctx, 31, 0x1F034Cu);
    ctx->pc = 0x1F0348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0344u;
    // 0x1f0348: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1B50u, 0x1F0344u, 0x1F034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F034Cu;
label_1f034c:
    // 0x1f034c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F034Cu;
    {
        const bool branch_taken_0x1f034c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f034c) {
            ctx->pc = 0x1F0360u;
            goto label_1f0360;
        }
    }
    ctx->pc = 0x1F0354u;
    // 0x1f0354: 0x0  nop
    ctx->pc = 0x1f0354u;
    // NOP
label_1f0358:
    // 0x1f0358: 0x8cb2004c  lw          $s2, 0x4C($a1)
    ctx->pc = 0x1f0358u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x1f035c: 0x0  nop
    ctx->pc = 0x1f035cu;
    // NOP
label_1f0360:
    // 0x1f0360: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F0360u;
    {
        const bool branch_taken_0x1f0360 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0360) {
            ctx->pc = 0x1F03C8u;
            goto label_1f03c8;
        }
    }
    ctx->pc = 0x1F0368u;
    // 0x1f0368: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F0368u;
    {
        const bool branch_taken_0x1f0368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0368) {
            ctx->pc = 0x1F03A0u;
            goto label_1f03a0;
        }
    }
    ctx->pc = 0x1F0370u;
    // 0x1f0370: 0x8e46007c  lw          $a2, 0x7C($s2)
    ctx->pc = 0x1f0370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x1f0374: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x1f0374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1f0378: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x1f0378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1f037c: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x1f037cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x1f0380: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1f0380u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1f0384: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f0384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f0388: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1f0388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1f038c: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x1f038cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1f0390: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f0390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f0394: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f0394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f0398: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F0398u;
    {
        const bool branch_taken_0x1f0398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0398u;
        // 0x1f039c: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0398) {
            ctx->pc = 0x1F03C8u;
            goto label_1f03c8;
        }
    }
    ctx->pc = 0x1F03A0u;
label_1f03a0:
    // 0x1f03a0: 0x8e46007c  lw          $a2, 0x7C($s2)
    ctx->pc = 0x1f03a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x1f03a4: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x1f03a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1f03a8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1f03a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1f03ac: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x1f03acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1f03b0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1f03b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1f03b4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1f03b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1f03b8: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x1f03b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1f03bc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f03bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f03c0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1f03c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1f03c4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f03c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f03c8:
    // 0x1f03c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f03c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f03cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f03ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f03d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f03d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f03d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f03d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f03d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F03D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F03DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03D8u;
        // 0x1f03dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F03D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F03E0u;
}
