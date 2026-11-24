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

// Function: sub_001270D8
// Address: 0x1270d8 - 0x1271a0
void sub_001270D8_0x1270d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001270D8_0x1270d8");
#endif

    switch (ctx->pc) {
        case 0x1270d8u: goto label_1270d8;
        case 0x1270dcu: goto label_1270dc;
        case 0x1270e0u: goto label_1270e0;
        case 0x1270e4u: goto label_1270e4;
        case 0x1270e8u: goto label_1270e8;
        case 0x1270ecu: goto label_1270ec;
        case 0x1270f0u: goto label_1270f0;
        case 0x1270f4u: goto label_1270f4;
        case 0x1270f8u: goto label_1270f8;
        case 0x1270fcu: goto label_1270fc;
        case 0x127100u: goto label_127100;
        case 0x127104u: goto label_127104;
        case 0x127108u: goto label_127108;
        case 0x12710cu: goto label_12710c;
        case 0x127110u: goto label_127110;
        case 0x127114u: goto label_127114;
        case 0x127118u: goto label_127118;
        case 0x12711cu: goto label_12711c;
        case 0x127120u: goto label_127120;
        case 0x127124u: goto label_127124;
        case 0x127128u: goto label_127128;
        case 0x12712cu: goto label_12712c;
        case 0x127130u: goto label_127130;
        case 0x127134u: goto label_127134;
        case 0x127138u: goto label_127138;
        case 0x12713cu: goto label_12713c;
        case 0x127140u: goto label_127140;
        case 0x127144u: goto label_127144;
        case 0x127148u: goto label_127148;
        case 0x12714cu: goto label_12714c;
        case 0x127150u: goto label_127150;
        case 0x127154u: goto label_127154;
        case 0x127158u: goto label_127158;
        case 0x12715cu: goto label_12715c;
        case 0x127160u: goto label_127160;
        case 0x127164u: goto label_127164;
        case 0x127168u: goto label_127168;
        case 0x12716cu: goto label_12716c;
        case 0x127170u: goto label_127170;
        case 0x127174u: goto label_127174;
        case 0x127178u: goto label_127178;
        case 0x12717cu: goto label_12717c;
        case 0x127180u: goto label_127180;
        case 0x127184u: goto label_127184;
        case 0x127188u: goto label_127188;
        case 0x12718cu: goto label_12718c;
        case 0x127190u: goto label_127190;
        case 0x127194u: goto label_127194;
        case 0x127198u: goto label_127198;
        case 0x12719cu: goto label_12719c;
        default: break;
    }

    ctx->pc = 0x1270d8u;

label_1270d8:
    // 0x1270d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1270d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1270dc:
    // 0x1270dc: 0x2caf0020  sltiu       $t7, $a1, 0x20
    ctx->pc = 0x1270dcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_1270e0:
    // 0x1270e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1270e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1270e4:
    // 0x1270e4: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x1270e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1270e8:
    // 0x1270e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1270e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1270ec:
    // 0x1270ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1270ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1270f0:
    // 0x1270f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1270f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1270f4:
    // 0x1270f4: 0x11e0001e  beqz        $t7, . + 4 + (0x1E << 2)
label_1270f8:
    if (ctx->pc == 0x1270F8u) {
        ctx->pc = 0x1270F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270F4u;
        // 0x1270f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1270FCu;
        goto label_1270fc;
    }
    ctx->pc = 0x1270F4u;
    {
        const bool branch_taken_0x1270f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1270F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270F4u;
        // 0x1270f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270f4) {
            ctx->pc = 0x127170u;
            goto label_127170;
        }
    }
    ctx->pc = 0x1270FCu;
label_1270fc:
    // 0x1270fc: 0x8c8e01d4  lw          $t6, 0x1D4($a0)
    ctx->pc = 0x1270fcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_127100:
    // 0x127100: 0x15c00007  bnez        $t6, . + 4 + (0x7 << 2)
label_127104:
    if (ctx->pc == 0x127104u) {
        ctx->pc = 0x127104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127100u;
        // 0x127104: 0x107880  sll         $t7, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127108u;
        goto label_127108;
    }
    ctx->pc = 0x127100u;
    {
        const bool branch_taken_0x127100 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x127104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127100u;
        // 0x127104: 0x107880  sll         $t7, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127100) {
            ctx->pc = 0x127120u;
            goto label_127120;
        }
    }
    ctx->pc = 0x127108u;
label_127108:
    // 0x127108: 0xc049bfa  jal         func_126FE8
label_12710c:
    if (ctx->pc == 0x12710Cu) {
        ctx->pc = 0x127110u;
        goto label_127110;
    }
    ctx->pc = 0x127108u;
    SET_GPR_U32(ctx, 31, 0x127110u);
    ctx->pc = 0x126FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126FE8u, 0x127108u, 0x127110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127110u;
label_127110:
    // 0x127110: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_127114:
    if (ctx->pc == 0x127114u) {
        ctx->pc = 0x127114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127110u;
        // 0x127114: 0x240cffff  addiu       $t4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127118u;
        goto label_127118;
    }
    ctx->pc = 0x127110u;
    {
        const bool branch_taken_0x127110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127110u;
        // 0x127114: 0x240cffff  addiu       $t4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127110) {
            ctx->pc = 0x127178u;
            goto label_127178;
        }
    }
    ctx->pc = 0x127118u;
label_127118:
    // 0x127118: 0x8e2e01d4  lw          $t6, 0x1D4($s1)
    ctx->pc = 0x127118u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_12711c:
    // 0x12711c: 0x107880  sll         $t7, $s0, 2
    ctx->pc = 0x12711cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_127120:
    // 0x127120: 0x1ee6821  addu        $t5, $t7, $t6
    ctx->pc = 0x127120u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_127124:
    // 0x127124: 0x8dae0000  lw          $t6, 0x0($t5)
    ctx->pc = 0x127124u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_127128:
    // 0x127128: 0x15c0000b  bnez        $t6, . + 4 + (0xB << 2)
label_12712c:
    if (ctx->pc == 0x12712Cu) {
        ctx->pc = 0x12712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127128u;
        // 0x12712c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127130u;
        goto label_127130;
    }
    ctx->pc = 0x127128u;
    {
        const bool branch_taken_0x127128 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127128u;
        // 0x12712c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127128) {
            ctx->pc = 0x127158u;
            goto label_127158;
        }
    }
    ctx->pc = 0x127130u;
label_127130:
    // 0x127130: 0xc049cc6  jal         func_127318
label_127134:
    if (ctx->pc == 0x127134u) {
        ctx->pc = 0x127134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127130u;
        // 0x127134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127138u;
        goto label_127138;
    }
    ctx->pc = 0x127130u;
    SET_GPR_U32(ctx, 31, 0x127138u);
    ctx->pc = 0x127134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127130u;
    // 0x127134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127318u, 0x127130u, 0x127138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127138u;
label_127138:
    // 0x127138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x127138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12713c:
    // 0x12713c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12713cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_127140:
    // 0x127140: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x127140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_127144:
    // 0x127144: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_127148:
    // 0x127148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12714c:
    // 0x12714c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12714cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127150:
    // 0x127150: 0x8049cb0  j           func_1272C0
label_127154:
    if (ctx->pc == 0x127154u) {
        ctx->pc = 0x127154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127150u;
        // 0x127154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127158u;
        goto label_127158;
    }
    ctx->pc = 0x127150u;
    ctx->pc = 0x127154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127150u;
    // 0x127154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272C0u;
    sub_001272C0_0x1272c0(rdram, ctx, runtime); return;
    ctx->pc = 0x127158u;
label_127158:
    // 0x127158: 0x11cf0007  beq         $t6, $t7, . + 4 + (0x7 << 2)
label_12715c:
    if (ctx->pc == 0x12715Cu) {
        ctx->pc = 0x12715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127158u;
        // 0x12715c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127160u;
        goto label_127160;
    }
    ctx->pc = 0x127158u;
    {
        const bool branch_taken_0x127158 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x12715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127158u;
        // 0x12715c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127158) {
            ctx->pc = 0x127178u;
            goto label_127178;
        }
    }
    ctx->pc = 0x127160u;
label_127160:
    // 0x127160: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x127160u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_127164:
    // 0x127164: 0x55cf000a  bnel        $t6, $t7, . + 4 + (0xA << 2)
label_127168:
    if (ctx->pc == 0x127168u) {
        ctx->pc = 0x127168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127164u;
        // 0x127168: 0xada00000  sw          $zero, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12716Cu;
        goto label_12716c;
    }
    ctx->pc = 0x127164u;
    {
        const bool branch_taken_0x127164 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x127164) {
            ctx->pc = 0x127168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127164u;
            // 0x127168: 0xada00000  sw          $zero, 0x0($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127190u;
            goto label_127190;
        }
    }
    ctx->pc = 0x12716Cu;
label_12716c:
    // 0x12716c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x12716cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127170:
    // 0x127170: 0x240f0016  addiu       $t7, $zero, 0x16
    ctx->pc = 0x127170u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_127174:
    // 0x127174: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x127174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_127178:
    // 0x127178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12717c:
    // 0x12717c: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x12717cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_127180:
    // 0x127180: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_127184:
    // 0x127184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x127184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_127188:
    // 0x127188: 0x3e00008  jr          $ra
label_12718c:
    if (ctx->pc == 0x12718Cu) {
        ctx->pc = 0x12718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127188u;
        // 0x12718c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127190u;
        goto label_127190;
    }
    ctx->pc = 0x127188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127188u;
        // 0x12718c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127190u;
label_127190:
    // 0x127190: 0x1c0f809  jalr        $t6
label_127194:
    if (ctx->pc == 0x127194u) {
        ctx->pc = 0x127194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127190u;
        // 0x127194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127198u;
        goto label_127198;
    }
    ctx->pc = 0x127190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 14);
        SET_GPR_U32(ctx, 31, 0x127198u);
        ctx->pc = 0x127194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127190u;
        // 0x127194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127190u, 0x127198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127198u;
label_127198:
    // 0x127198: 0x1000fff7  b           . + 4 + (-0x9 << 2)
label_12719c:
    if (ctx->pc == 0x12719Cu) {
        ctx->pc = 0x12719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127198u;
        // 0x12719c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1271A0u;
        goto label_fallthrough_0x127198;
    }
    ctx->pc = 0x127198u;
    {
        const bool branch_taken_0x127198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127198u;
        // 0x12719c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127198) {
            ctx->pc = 0x127178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127178;
        }
    }
label_fallthrough_0x127198:
    ctx->pc = 0x1271A0u;
}
