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

// Function: sub_0020D850
// Address: 0x20d850 - 0x20d9ec
void sub_0020D850_0x20d850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D850_0x20d850");
#endif

    switch (ctx->pc) {
        case 0x20d890u: goto label_20d890;
        case 0x20d89cu: goto label_20d89c;
        case 0x20d8b8u: goto label_20d8b8;
        case 0x20d8fcu: goto label_20d8fc;
        case 0x20d914u: goto label_20d914;
        case 0x20d930u: goto label_20d930;
        case 0x20d94cu: goto label_20d94c;
        case 0x20d968u: goto label_20d968;
        case 0x20d970u: goto label_20d970;
        case 0x20d98cu: goto label_20d98c;
        default: break;
    }

    ctx->pc = 0x20d850u;

    // 0x20d850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20d850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20d854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20d854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20d858: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20d858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20d85c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20d85cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d860: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20d860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20d864: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x20d864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x20d868: 0x26351020  addiu       $s5, $s1, 0x1020
    ctx->pc = 0x20d868u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4128));
    // 0x20d86c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x20d86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x20d870: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x20d870u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d874: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20d874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20d878: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x20d878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x20d87c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x20d87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x20d880: 0x8e342004  lw          $s4, 0x2004($s1)
    ctx->pc = 0x20d880u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8196)));
    // 0x20d884: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x20d884u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x20d888: 0xc08e730  jal         func_239CC0
    ctx->pc = 0x20D888u;
    SET_GPR_U32(ctx, 31, 0x20D890u);
    ctx->pc = 0x20D88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D888u;
    // 0x20d88c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239CC0u, 0x20D888u, 0x20D890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D890u;
label_20d890:
    // 0x20d890: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20d890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d894: 0xc08ed54  jal         func_23B550
    ctx->pc = 0x20D894u;
    SET_GPR_U32(ctx, 31, 0x20D89Cu);
    ctx->pc = 0x20D898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D894u;
    // 0x20d898: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B550u, 0x20D894u, 0x20D89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D89Cu;
label_20d89c:
    // 0x20d89c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20d89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d8a0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D8A0u;
    {
        const bool branch_taken_0x20d8a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8A0u;
        // 0x20d8a4: 0x3c020088  lui         $v0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8a0) {
            ctx->pc = 0x20D8ACu;
            goto label_20d8ac;
        }
    }
    ctx->pc = 0x20D8A8u;
    // 0x20d8a8: 0xac50fb6c  sw          $s0, -0x494($v0)
    ctx->pc = 0x20d8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966124), GPR_U32(ctx, 16));
label_20d8ac:
    // 0x20d8ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d8b0: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x20D8B0u;
    SET_GPR_U32(ctx, 31, 0x20D8B8u);
    ctx->pc = 0x20D8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D8B0u;
    // 0x20d8b4: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x20D8B0u, 0x20D8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D8B8u;
label_20d8b8:
    // 0x20d8b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20d8bc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x20d8bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x20d8c0: 0x1203000b  beq         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x20D8C0u;
    {
        const bool branch_taken_0x20d8c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x20D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8C0u;
        // 0x20d8c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8c0) {
            ctx->pc = 0x20D8F0u;
            goto label_20d8f0;
        }
    }
    ctx->pc = 0x20D8C8u;
    // 0x20d8c8: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20D8C8u;
    {
        const bool branch_taken_0x20d8c8 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x20D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8C8u;
        // 0x20d8cc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8c8) {
            ctx->pc = 0x20D8E0u;
            goto label_20d8e0;
        }
    }
    ctx->pc = 0x20D8D0u;
    // 0x20d8d0: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20D8D0u;
    {
        const bool branch_taken_0x20d8d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x20d8d0) {
            ctx->pc = 0x20D908u;
            goto label_20d908;
        }
    }
    ctx->pc = 0x20D8D8u;
    // 0x20d8d8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x20D8D8u;
    {
        const bool branch_taken_0x20d8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d8d8) {
            ctx->pc = 0x20D920u;
            goto label_20d920;
        }
    }
    ctx->pc = 0x20D8E0u;
label_20d8e0:
    // 0x20d8e0: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20D8E0u;
    {
        const bool branch_taken_0x20d8e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8E0u;
        // 0x20d8e4: 0x2662fffc  addiu       $v0, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8e0) {
            ctx->pc = 0x20D934u;
            goto label_20d934;
        }
    }
    ctx->pc = 0x20D8E8u;
    // 0x20d8e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20D8E8u;
    {
        const bool branch_taken_0x20d8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d8e8) {
            ctx->pc = 0x20D920u;
            goto label_20d920;
        }
    }
    ctx->pc = 0x20D8F0u;
label_20d8f0:
    // 0x20d8f0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x20d8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x20d8f4: 0xc0848e0  jal         func_212380
    ctx->pc = 0x20D8F4u;
    SET_GPR_U32(ctx, 31, 0x20D8FCu);
    ctx->pc = 0x20D8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D8F4u;
    // 0x20d8f8: 0x34a50c08  ori         $a1, $a1, 0xC08 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3080);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x20D8F4u, 0x20D8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D8FCu;
label_20d8fc:
    // 0x20d8fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20D8FCu;
    {
        const bool branch_taken_0x20d8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8FCu;
        // 0x20d900: 0x2662fffc  addiu       $v0, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8fc) {
            ctx->pc = 0x20D934u;
            goto label_20d934;
        }
    }
    ctx->pc = 0x20D904u;
    // 0x20d904: 0x0  nop
    ctx->pc = 0x20d904u;
    // NOP
label_20d908:
    // 0x20d908: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x20d908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x20d90c: 0xc0848e0  jal         func_212380
    ctx->pc = 0x20D90Cu;
    SET_GPR_U32(ctx, 31, 0x20D914u);
    ctx->pc = 0x20D910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D90Cu;
    // 0x20d910: 0x34a50c09  ori         $a1, $a1, 0xC09 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3081);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x20D90Cu, 0x20D914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D914u;
label_20d914:
    // 0x20d914: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20D914u;
    {
        const bool branch_taken_0x20d914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D914u;
        // 0x20d918: 0x2662fffc  addiu       $v0, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d914) {
            ctx->pc = 0x20D934u;
            goto label_20d934;
        }
    }
    ctx->pc = 0x20D91Cu;
    // 0x20d91c: 0x0  nop
    ctx->pc = 0x20d91cu;
    // NOP
label_20d920:
    // 0x20d920: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x20d920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x20d924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d928: 0xc0848e0  jal         func_212380
    ctx->pc = 0x20D928u;
    SET_GPR_U32(ctx, 31, 0x20D930u);
    ctx->pc = 0x20D92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D928u;
    // 0x20d92c: 0x34a50c07  ori         $a1, $a1, 0xC07 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3079);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x20D928u, 0x20D930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D930u;
label_20d930:
    // 0x20d930: 0x2662fffc  addiu       $v0, $s3, -0x4
    ctx->pc = 0x20d930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_20d934:
    // 0x20d934: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x20d934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20d938: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20D938u;
    {
        const bool branch_taken_0x20d938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d938) {
            ctx->pc = 0x20D93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D938u;
            // 0x20d93c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D950u;
            goto label_20d950;
        }
    }
    ctx->pc = 0x20D940u;
    // 0x20d940: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20d940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d944: 0xc088972  jal         func_2225C8
    ctx->pc = 0x20D944u;
    SET_GPR_U32(ctx, 31, 0x20D94Cu);
    ctx->pc = 0x20D948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D944u;
    // 0x20d948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2225C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2225C8u, 0x20D944u, 0x20D94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D94Cu;
label_20d94c:
    // 0x20d94c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20d950:
    // 0x20d950: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D950u;
    {
        const bool branch_taken_0x20d950 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x20D954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D950u;
        // 0x20d954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d950) {
            ctx->pc = 0x20D960u;
            goto label_20d960;
        }
    }
    ctx->pc = 0x20D958u;
    // 0x20d958: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D958u;
    {
        const bool branch_taken_0x20d958 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d958) {
            ctx->pc = 0x20D968u;
            goto label_20d968;
        }
    }
    ctx->pc = 0x20D960u;
label_20d960:
    // 0x20d960: 0xc0836cc  jal         func_20DB30
    ctx->pc = 0x20D960u;
    SET_GPR_U32(ctx, 31, 0x20D968u);
    ctx->pc = 0x20D964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D960u;
    // 0x20d964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB30u, 0x20D960u, 0x20D968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D968u;
label_20d968:
    // 0x20d968: 0xc0836c0  jal         func_20DB00
    ctx->pc = 0x20D968u;
    SET_GPR_U32(ctx, 31, 0x20D970u);
    ctx->pc = 0x20D96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D968u;
    // 0x20d96c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB00u, 0x20D968u, 0x20D970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D970u;
label_20d970:
    // 0x20d970: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20d970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d974: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x20D974u;
    {
        const bool branch_taken_0x20d974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D974u;
        // 0x20d978: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d974) {
            ctx->pc = 0x20D9C8u;
            goto label_20d9c8;
        }
    }
    ctx->pc = 0x20D97Cu;
    // 0x20d97c: 0x56c00013  bnel        $s6, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x20D97Cu;
    {
        const bool branch_taken_0x20d97c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d97c) {
            ctx->pc = 0x20D980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D97Cu;
            // 0x20d980: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D9CCu;
            goto label_20d9cc;
        }
    }
    ctx->pc = 0x20D984u;
    // 0x20d984: 0xc08ef00  jal         func_23BC00
    ctx->pc = 0x20D984u;
    SET_GPR_U32(ctx, 31, 0x20D98Cu);
    ctx->pc = 0x20D988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D984u;
    // 0x20d988: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BC00u, 0x20D984u, 0x20D98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D98Cu;
label_20d98c:
    // 0x20d98c: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x20d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x20d990: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20D990u;
    {
        const bool branch_taken_0x20d990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D990u;
        // 0x20d994: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d990) {
            ctx->pc = 0x20D9C8u;
            goto label_20d9c8;
        }
    }
    ctx->pc = 0x20D998u;
    // 0x20d998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d99c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20d99cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20d9a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20d9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d9a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20d9a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d9a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20d9a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d9ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20d9acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d9b0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x20d9b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20d9b4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x20d9b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d9b8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x20d9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d9bc: 0x80836cc  j           func_20DB30
    ctx->pc = 0x20D9BCu;
    ctx->pc = 0x20D9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D9BCu;
    // 0x20d9c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB30u;
    sub_0020DB30_0x20db30(rdram, ctx, runtime); return;
    ctx->pc = 0x20D9C4u;
    // 0x20d9c4: 0x0  nop
    ctx->pc = 0x20d9c4u;
    // NOP
label_20d9c8:
    // 0x20d9c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20d9c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20d9cc:
    // 0x20d9cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20d9ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d9d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20d9d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d9d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20d9d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d9d8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x20d9d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20d9dc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x20d9dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d9e0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x20d9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x20D9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9E4u;
        // 0x20d9e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D9ECu;
}
