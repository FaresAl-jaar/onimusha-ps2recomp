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

// Function: sub_002450A8
// Address: 0x2450a8 - 0x245164
void sub_002450A8_0x2450a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002450A8_0x2450a8");
#endif

    switch (ctx->pc) {
        case 0x2450a8u: goto label_2450a8;
        case 0x2450acu: goto label_2450ac;
        case 0x2450b0u: goto label_2450b0;
        case 0x2450b4u: goto label_2450b4;
        case 0x2450b8u: goto label_2450b8;
        case 0x2450bcu: goto label_2450bc;
        case 0x2450c0u: goto label_2450c0;
        case 0x2450c4u: goto label_2450c4;
        case 0x2450c8u: goto label_2450c8;
        case 0x2450ccu: goto label_2450cc;
        case 0x2450d0u: goto label_2450d0;
        case 0x2450d4u: goto label_2450d4;
        case 0x2450d8u: goto label_2450d8;
        case 0x2450dcu: goto label_2450dc;
        case 0x2450e0u: goto label_2450e0;
        case 0x2450e4u: goto label_2450e4;
        case 0x2450e8u: goto label_2450e8;
        case 0x2450ecu: goto label_2450ec;
        case 0x2450f0u: goto label_2450f0;
        case 0x2450f4u: goto label_2450f4;
        case 0x2450f8u: goto label_2450f8;
        case 0x2450fcu: goto label_2450fc;
        case 0x245100u: goto label_245100;
        case 0x245104u: goto label_245104;
        case 0x245108u: goto label_245108;
        case 0x24510cu: goto label_24510c;
        case 0x245110u: goto label_245110;
        case 0x245114u: goto label_245114;
        case 0x245118u: goto label_245118;
        case 0x24511cu: goto label_24511c;
        case 0x245120u: goto label_245120;
        case 0x245124u: goto label_245124;
        case 0x245128u: goto label_245128;
        case 0x24512cu: goto label_24512c;
        case 0x245130u: goto label_245130;
        case 0x245134u: goto label_245134;
        case 0x245138u: goto label_245138;
        case 0x24513cu: goto label_24513c;
        case 0x245140u: goto label_245140;
        case 0x245144u: goto label_245144;
        case 0x245148u: goto label_245148;
        case 0x24514cu: goto label_24514c;
        case 0x245150u: goto label_245150;
        case 0x245154u: goto label_245154;
        case 0x245158u: goto label_245158;
        case 0x24515cu: goto label_24515c;
        case 0x245160u: goto label_245160;
        default: break;
    }

    ctx->pc = 0x2450a8u;

label_2450a8:
    // 0x2450a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2450a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2450ac:
    // 0x2450ac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2450acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2450b0:
    // 0x2450b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2450b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2450b4:
    // 0x2450b4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2450b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2450b8:
    // 0x2450b8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2450bc:
    if (ctx->pc == 0x2450BCu) {
        ctx->pc = 0x2450BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450B8u;
        // 0x2450bc: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2450C0u;
        goto label_2450c0;
    }
    ctx->pc = 0x2450B8u;
    {
        const bool branch_taken_0x2450b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2450BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450B8u;
        // 0x2450bc: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450b8) {
            ctx->pc = 0x2450D0u;
            goto label_2450d0;
        }
    }
    ctx->pc = 0x2450C0u;
label_2450c0:
    // 0x2450c0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2450c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2450c4:
    // 0x2450c4: 0x10000011  b           . + 4 + (0x11 << 2)
label_2450c8:
    if (ctx->pc == 0x2450C8u) {
        ctx->pc = 0x2450C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450C4u;
        // 0x2450c8: 0x2484c520  addiu       $a0, $a0, -0x3AE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2450CCu;
        goto label_2450cc;
    }
    ctx->pc = 0x2450C4u;
    {
        const bool branch_taken_0x2450c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2450C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450C4u;
        // 0x2450c8: 0x2484c520  addiu       $a0, $a0, -0x3AE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450c4) {
            ctx->pc = 0x24510Cu;
            goto label_24510c;
        }
    }
    ctx->pc = 0x2450CCu;
label_2450cc:
    // 0x2450cc: 0x0  nop
    ctx->pc = 0x2450ccu;
    // NOP
label_2450d0:
    // 0x2450d0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_2450d4:
    if (ctx->pc == 0x2450D4u) {
        ctx->pc = 0x2450D8u;
        goto label_2450d8;
    }
    ctx->pc = 0x2450D0u;
    {
        const bool branch_taken_0x2450d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2450d0) {
            ctx->pc = 0x2450E8u;
            goto label_2450e8;
        }
    }
    ctx->pc = 0x2450D8u;
label_2450d8:
    // 0x2450d8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2450d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2450dc:
    // 0x2450dc: 0x1000000b  b           . + 4 + (0xB << 2)
label_2450e0:
    if (ctx->pc == 0x2450E0u) {
        ctx->pc = 0x2450E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450DCu;
        // 0x2450e0: 0x2484c548  addiu       $a0, $a0, -0x3AB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2450E4u;
        goto label_2450e4;
    }
    ctx->pc = 0x2450DCu;
    {
        const bool branch_taken_0x2450dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2450E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450DCu;
        // 0x2450e0: 0x2484c548  addiu       $a0, $a0, -0x3AB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450dc) {
            ctx->pc = 0x24510Cu;
            goto label_24510c;
        }
    }
    ctx->pc = 0x2450E4u;
label_2450e4:
    // 0x2450e4: 0x0  nop
    ctx->pc = 0x2450e4u;
    // NOP
label_2450e8:
    // 0x2450e8: 0xc090e62  jal         func_243988
label_2450ec:
    if (ctx->pc == 0x2450ECu) {
        ctx->pc = 0x2450F0u;
        goto label_2450f0;
    }
    ctx->pc = 0x2450E8u;
    SET_GPR_U32(ctx, 31, 0x2450F0u);
    ctx->pc = 0x243988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243988u, 0x2450E8u, 0x2450F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2450F0u;
label_2450f0:
    // 0x2450f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2450f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2450f4:
    // 0x2450f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2450f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2450f8:
    // 0x2450f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2450f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2450fc:
    // 0x2450fc: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_245100:
    if (ctx->pc == 0x245100u) {
        ctx->pc = 0x245100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450FCu;
        // 0x245100: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245104u;
        goto label_245104;
    }
    ctx->pc = 0x2450FCu;
    {
        const bool branch_taken_0x2450fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x245100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450FCu;
        // 0x245100: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450fc) {
            ctx->pc = 0x245120u;
            goto label_245120;
        }
    }
    ctx->pc = 0x245104u;
label_245104:
    // 0x245104: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x245104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_245108:
    // 0x245108: 0x2484c578  addiu       $a0, $a0, -0x3A88
    ctx->pc = 0x245108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952312));
label_24510c:
    // 0x24510c: 0xc090d8a  jal         func_243628
label_245110:
    if (ctx->pc == 0x245110u) {
        ctx->pc = 0x245114u;
        goto label_245114;
    }
    ctx->pc = 0x24510Cu;
    SET_GPR_U32(ctx, 31, 0x245114u);
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x24510Cu, 0x245114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245114u;
label_245114:
    // 0x245114: 0x1000000e  b           . + 4 + (0xE << 2)
label_245118:
    if (ctx->pc == 0x245118u) {
        ctx->pc = 0x245118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245114u;
        // 0x245118: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24511Cu;
        goto label_24511c;
    }
    ctx->pc = 0x245114u;
    {
        const bool branch_taken_0x245114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245114u;
        // 0x245118: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245114) {
            ctx->pc = 0x245150u;
            goto label_245150;
        }
    }
    ctx->pc = 0x24511Cu;
label_24511c:
    // 0x24511c: 0x0  nop
    ctx->pc = 0x24511cu;
    // NOP
label_245120:
    // 0x245120: 0xc049590  jal         func_125640
label_245124:
    if (ctx->pc == 0x245124u) {
        ctx->pc = 0x245128u;
        goto label_245128;
    }
    ctx->pc = 0x245120u;
    SET_GPR_U32(ctx, 31, 0x245128u);
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x245120u, 0x245128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245128u;
label_245128:
    // 0x245128: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x245128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24512c:
    // 0x24512c: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x24512cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_245130:
    // 0x245130: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x245130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_245134:
    // 0x245134: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x245134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_245138:
    // 0x245138: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x245138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24513c:
    // 0x24513c: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x24513cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_245140:
    // 0x245140: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_245144:
    if (ctx->pc == 0x245144u) {
        ctx->pc = 0x245144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245140u;
        // 0x245144: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245148u;
        goto label_245148;
    }
    ctx->pc = 0x245140u;
    {
        const bool branch_taken_0x245140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x245144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245140u;
        // 0x245144: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245140) {
            ctx->pc = 0x245150u;
            goto label_245150;
        }
    }
    ctx->pc = 0x245148u;
label_245148:
    // 0x245148: 0x60f809  jalr        $v1
label_24514c:
    if (ctx->pc == 0x24514Cu) {
        ctx->pc = 0x245150u;
        goto label_245150;
    }
    ctx->pc = 0x245148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x245150u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245148u, 0x245150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245150u;
label_245150:
    // 0x245150: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x245150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_245154:
    // 0x245154: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x245154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_245158:
    // 0x245158: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x245158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24515c:
    // 0x24515c: 0x3e00008  jr          $ra
label_245160:
    if (ctx->pc == 0x245160u) {
        ctx->pc = 0x245160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24515Cu;
        // 0x245160: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245164u;
        goto label_fallthrough_0x24515c;
    }
    ctx->pc = 0x24515Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24515Cu;
        // 0x245160: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24515Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24515c:
    ctx->pc = 0x245164u;
}
