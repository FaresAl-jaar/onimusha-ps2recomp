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

// Function: sub_002051B0
// Address: 0x2051b0 - 0x2052f4
void sub_002051B0_0x2051b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002051B0_0x2051b0");
#endif

    switch (ctx->pc) {
        case 0x2051f8u: goto label_2051f8;
        case 0x205210u: goto label_205210;
        case 0x205234u: goto label_205234;
        case 0x205248u: goto label_205248;
        case 0x205254u: goto label_205254;
        case 0x205260u: goto label_205260;
        case 0x2052d4u: goto label_2052d4;
        default: break;
    }

    ctx->pc = 0x2051b0u;

    // 0x2051b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2051b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2051b4: 0x28c30800  slti        $v1, $a2, 0x800
    ctx->pc = 0x2051b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x2051b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2051b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2051bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2051bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2051c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2051c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2051c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2051c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2051cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2051ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2051d0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2051d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2051d4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2051d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2051d8: 0x8e6200b4  lw          $v0, 0xB4($s3)
    ctx->pc = 0x2051d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x2051dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2051dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2051e0: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2051E0u;
    {
        const bool branch_taken_0x2051e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2051E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051E0u;
        // 0x2051e4: 0xae6200b4  sw          $v0, 0xB4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051e0) {
            ctx->pc = 0x2052D4u;
            goto label_2052d4;
        }
    }
    ctx->pc = 0x2051E8u;
    // 0x2051e8: 0x5080003b  beql        $a0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2051E8u;
    {
        const bool branch_taken_0x2051e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2051e8) {
            ctx->pc = 0x2051ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2051E8u;
            // 0x2051ec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2052D8u;
            goto label_2052d8;
        }
    }
    ctx->pc = 0x2051F0u;
    // 0x2051f0: 0xc088df4  jal         func_2237D0
    ctx->pc = 0x2051F0u;
    SET_GPR_U32(ctx, 31, 0x2051F8u);
    ctx->pc = 0x2051F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2051F0u;
    // 0x2051f4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2237D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2237D0u, 0x2051F0u, 0x2051F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2051F8u;
label_2051f8:
    // 0x2051f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2051f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2051fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205200: 0x12400034  beqz        $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x205200u;
    {
        const bool branch_taken_0x205200 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x205204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205200u;
        // 0x205204: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205200) {
            ctx->pc = 0x2052D4u;
            goto label_2052d4;
        }
    }
    ctx->pc = 0x205208u;
    // 0x205208: 0xc088e7a  jal         func_2239E8
    ctx->pc = 0x205208u;
    SET_GPR_U32(ctx, 31, 0x205210u);
    ctx->pc = 0x2239E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E8u, 0x205208u, 0x205210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205210u;
label_205210:
    // 0x205210: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x205210u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205218: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x205218u;
    {
        const bool branch_taken_0x205218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205218u;
        // 0x20521c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205218) {
            ctx->pc = 0x20522Cu;
            goto label_20522c;
        }
    }
    ctx->pc = 0x205220u;
    // 0x205220: 0x8fb40000  lw          $s4, 0x0($sp)
    ctx->pc = 0x205220u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205224: 0x12830006  beq         $s4, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x205224u;
    {
        const bool branch_taken_0x205224 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x205224) {
            ctx->pc = 0x205240u;
            goto label_205240;
        }
    }
    ctx->pc = 0x20522Cu;
label_20522c:
    // 0x20522c: 0xc088e26  jal         func_223898
    ctx->pc = 0x20522Cu;
    SET_GPR_U32(ctx, 31, 0x205234u);
    ctx->pc = 0x223898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223898u, 0x20522Cu, 0x205234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205234u;
label_205234:
    // 0x205234: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x205234u;
    {
        const bool branch_taken_0x205234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205234u;
        // 0x205238: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205234) {
            ctx->pc = 0x2052D8u;
            goto label_2052d8;
        }
    }
    ctx->pc = 0x20523Cu;
    // 0x20523c: 0x0  nop
    ctx->pc = 0x20523cu;
    // NOP
label_205240:
    // 0x205240: 0xc0814be  jal         func_2052F8
    ctx->pc = 0x205240u;
    SET_GPR_U32(ctx, 31, 0x205248u);
    ctx->pc = 0x205244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205240u;
    // 0x205244: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2052F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2052F8u, 0x205240u, 0x205248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205248u;
label_205248:
    // 0x205248: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x205248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20524c: 0xc0813a4  jal         func_204E90
    ctx->pc = 0x20524Cu;
    SET_GPR_U32(ctx, 31, 0x205254u);
    ctx->pc = 0x205250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20524Cu;
    // 0x205250: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204E90u, 0x20524Cu, 0x205254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205254u;
label_205254:
    // 0x205254: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x205254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205258: 0xc08140a  jal         func_205028
    ctx->pc = 0x205258u;
    SET_GPR_U32(ctx, 31, 0x205260u);
    ctx->pc = 0x20525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205258u;
    // 0x20525c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205028u, 0x205258u, 0x205260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205260u;
label_205260:
    // 0x205260: 0x8e6500bc  lw          $a1, 0xBC($s3)
    ctx->pc = 0x205260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x205264: 0x8e6600b4  lw          $a2, 0xB4($s3)
    ctx->pc = 0x205264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x205268: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x205268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20526c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x20526cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x205270: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x205270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x205274: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x205274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x205278: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x205278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20527c: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x20527cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x205280: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x205280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x205284: 0x2654821  addu        $t1, $s3, $a1
    ctx->pc = 0x205284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x205288: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x205288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20528c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x20528cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205290: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x205290u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x205294: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x205294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205298: 0xad110008  sw          $s1, 0x8($t0)
    ctx->pc = 0x205298u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 17));
    // 0x20529c: 0xacb0000c  sw          $s0, 0xC($a1)
    ctx->pc = 0x20529cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 16));
    // 0x2052a0: 0xac6200d0  sw          $v0, 0xD0($v1)
    ctx->pc = 0x2052a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 2));
    // 0x2052a4: 0xad340000  sw          $s4, 0x0($t1)
    ctx->pc = 0x2052a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 20));
    // 0x2052a8: 0x8e6300bc  lw          $v1, 0xBC($s3)
    ctx->pc = 0x2052a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x2052ac: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x2052acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2052b0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2052b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2052b4: 0x28a60000  slti        $a2, $a1, 0x0
    ctx->pc = 0x2052b4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2052b8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2052b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2052bc: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x2052bcu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2052c0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2052c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2052c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2052c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2052c8: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x2052c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2052cc: 0xc088e26  jal         func_223898
    ctx->pc = 0x2052CCu;
    SET_GPR_U32(ctx, 31, 0x2052D4u);
    ctx->pc = 0x2052D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2052CCu;
    // 0x2052d0: 0xae6500bc  sw          $a1, 0xBC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223898u, 0x2052CCu, 0x2052D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2052D4u;
label_2052d4:
    // 0x2052d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2052d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2052d8:
    // 0x2052d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2052d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2052dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2052dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2052e0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2052e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2052e4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2052e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2052e8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2052e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2052ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2052ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2052F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052ECu;
        // 0x2052f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2052ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2052F4u;
}
