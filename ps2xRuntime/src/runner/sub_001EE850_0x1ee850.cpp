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

// Function: sub_001EE850
// Address: 0x1ee850 - 0x1ee938
void sub_001EE850_0x1ee850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE850_0x1ee850");
#endif

    switch (ctx->pc) {
        case 0x1ee850u: goto label_1ee850;
        case 0x1ee854u: goto label_1ee854;
        case 0x1ee858u: goto label_1ee858;
        case 0x1ee85cu: goto label_1ee85c;
        case 0x1ee860u: goto label_1ee860;
        case 0x1ee864u: goto label_1ee864;
        case 0x1ee868u: goto label_1ee868;
        case 0x1ee86cu: goto label_1ee86c;
        case 0x1ee870u: goto label_1ee870;
        case 0x1ee874u: goto label_1ee874;
        case 0x1ee878u: goto label_1ee878;
        case 0x1ee87cu: goto label_1ee87c;
        case 0x1ee880u: goto label_1ee880;
        case 0x1ee884u: goto label_1ee884;
        case 0x1ee888u: goto label_1ee888;
        case 0x1ee88cu: goto label_1ee88c;
        case 0x1ee890u: goto label_1ee890;
        case 0x1ee894u: goto label_1ee894;
        case 0x1ee898u: goto label_1ee898;
        case 0x1ee89cu: goto label_1ee89c;
        case 0x1ee8a0u: goto label_1ee8a0;
        case 0x1ee8a4u: goto label_1ee8a4;
        case 0x1ee8a8u: goto label_1ee8a8;
        case 0x1ee8acu: goto label_1ee8ac;
        case 0x1ee8b0u: goto label_1ee8b0;
        case 0x1ee8b4u: goto label_1ee8b4;
        case 0x1ee8b8u: goto label_1ee8b8;
        case 0x1ee8bcu: goto label_1ee8bc;
        case 0x1ee8c0u: goto label_1ee8c0;
        case 0x1ee8c4u: goto label_1ee8c4;
        case 0x1ee8c8u: goto label_1ee8c8;
        case 0x1ee8ccu: goto label_1ee8cc;
        case 0x1ee8d0u: goto label_1ee8d0;
        case 0x1ee8d4u: goto label_1ee8d4;
        case 0x1ee8d8u: goto label_1ee8d8;
        case 0x1ee8dcu: goto label_1ee8dc;
        case 0x1ee8e0u: goto label_1ee8e0;
        case 0x1ee8e4u: goto label_1ee8e4;
        case 0x1ee8e8u: goto label_1ee8e8;
        case 0x1ee8ecu: goto label_1ee8ec;
        case 0x1ee8f0u: goto label_1ee8f0;
        case 0x1ee8f4u: goto label_1ee8f4;
        case 0x1ee8f8u: goto label_1ee8f8;
        case 0x1ee8fcu: goto label_1ee8fc;
        case 0x1ee900u: goto label_1ee900;
        case 0x1ee904u: goto label_1ee904;
        case 0x1ee908u: goto label_1ee908;
        case 0x1ee90cu: goto label_1ee90c;
        case 0x1ee910u: goto label_1ee910;
        case 0x1ee914u: goto label_1ee914;
        case 0x1ee918u: goto label_1ee918;
        case 0x1ee91cu: goto label_1ee91c;
        case 0x1ee920u: goto label_1ee920;
        case 0x1ee924u: goto label_1ee924;
        case 0x1ee928u: goto label_1ee928;
        case 0x1ee92cu: goto label_1ee92c;
        case 0x1ee930u: goto label_1ee930;
        case 0x1ee934u: goto label_1ee934;
        default: break;
    }

    ctx->pc = 0x1ee850u;

label_1ee850:
    // 0x1ee850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ee850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ee854:
    // 0x1ee854: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ee854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ee858:
    // 0x1ee858: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ee858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ee85c:
    // 0x1ee85c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ee860:
    // 0x1ee860: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ee860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ee864:
    // 0x1ee864: 0xc07bc10  jal         func_1EF040
label_1ee868:
    if (ctx->pc == 0x1EE868u) {
        ctx->pc = 0x1EE868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE864u;
        // 0x1ee868: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE86Cu;
        goto label_1ee86c;
    }
    ctx->pc = 0x1EE864u;
    SET_GPR_U32(ctx, 31, 0x1EE86Cu);
    ctx->pc = 0x1EE868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE864u;
    // 0x1ee868: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF040u, 0x1EE864u, 0x1EE86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE86Cu;
label_1ee86c:
    // 0x1ee86c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_1ee870:
    if (ctx->pc == 0x1EE870u) {
        ctx->pc = 0x1EE874u;
        goto label_1ee874;
    }
    ctx->pc = 0x1EE86Cu;
    {
        const bool branch_taken_0x1ee86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee86c) {
            ctx->pc = 0x1EE920u;
            goto label_1ee920;
        }
    }
    ctx->pc = 0x1EE874u;
label_1ee874:
    // 0x1ee874: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ee874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ee878:
    // 0x1ee878: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_1ee87c:
    if (ctx->pc == 0x1EE87Cu) {
        ctx->pc = 0x1EE880u;
        goto label_1ee880;
    }
    ctx->pc = 0x1EE878u;
    {
        const bool branch_taken_0x1ee878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee878) {
            ctx->pc = 0x1EE8F0u;
            goto label_1ee8f0;
        }
    }
    ctx->pc = 0x1EE880u;
label_1ee880:
    // 0x1ee880: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1ee880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1ee884:
    // 0x1ee884: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1ee884u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1ee888:
    // 0x1ee888: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1ee888u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ee88c:
    // 0x1ee88c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_1ee890:
    if (ctx->pc == 0x1EE890u) {
        ctx->pc = 0x1EE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE88Cu;
        // 0x1ee890: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE894u;
        goto label_1ee894;
    }
    ctx->pc = 0x1EE88Cu;
    {
        const bool branch_taken_0x1ee88c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE88Cu;
        // 0x1ee890: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee88c) {
            ctx->pc = 0x1EE8F0u;
            goto label_1ee8f0;
        }
    }
    ctx->pc = 0x1EE894u;
label_1ee894:
    // 0x1ee894: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ee894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee898:
    // 0x1ee898: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ee898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ee89c:
    // 0x1ee89c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1ee89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1ee8a0:
    // 0x1ee8a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ee8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ee8a4:
    // 0x1ee8a4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1ee8a8:
    if (ctx->pc == 0x1EE8A8u) {
        ctx->pc = 0x1EE8ACu;
        goto label_1ee8ac;
    }
    ctx->pc = 0x1EE8A4u;
    {
        const bool branch_taken_0x1ee8a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee8a4) {
            ctx->pc = 0x1EE8D8u;
            goto label_1ee8d8;
        }
    }
    ctx->pc = 0x1EE8ACu;
label_1ee8ac:
    // 0x1ee8ac: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ee8b0:
    if (ctx->pc == 0x1EE8B0u) {
        ctx->pc = 0x1EE8B4u;
        goto label_1ee8b4;
    }
    ctx->pc = 0x1EE8ACu;
    {
        const bool branch_taken_0x1ee8ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee8ac) {
            ctx->pc = 0x1EE8C8u;
            goto label_1ee8c8;
        }
    }
    ctx->pc = 0x1EE8B4u;
label_1ee8b4:
    // 0x1ee8b4: 0x8c990040  lw          $t9, 0x40($a0)
    ctx->pc = 0x1ee8b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1ee8b8:
    // 0x1ee8b8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ee8b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ee8bc:
    // 0x1ee8bc: 0x320f809  jalr        $t9
label_1ee8c0:
    if (ctx->pc == 0x1EE8C0u) {
        ctx->pc = 0x1EE8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8BCu;
        // 0x1ee8c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE8C4u;
        goto label_1ee8c4;
    }
    ctx->pc = 0x1EE8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EE8C4u);
        ctx->pc = 0x1EE8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8BCu;
        // 0x1ee8c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE8BCu, 0x1EE8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EE8C4u;
label_1ee8c4:
    // 0x1ee8c4: 0x0  nop
    ctx->pc = 0x1ee8c4u;
    // NOP
label_1ee8c8:
    // 0x1ee8c8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ee8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ee8cc:
    // 0x1ee8cc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1ee8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1ee8d0:
    // 0x1ee8d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ee8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1ee8d4:
    // 0x1ee8d4: 0x0  nop
    ctx->pc = 0x1ee8d4u;
    // NOP
label_1ee8d8:
    // 0x1ee8d8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1ee8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1ee8dc:
    // 0x1ee8dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ee8dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ee8e0:
    // 0x1ee8e0: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1ee8e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1ee8e4:
    // 0x1ee8e4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1ee8e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ee8e8:
    // 0x1ee8e8: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_1ee8ec:
    if (ctx->pc == 0x1EE8ECu) {
        ctx->pc = 0x1EE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8E8u;
        // 0x1ee8ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE8F0u;
        goto label_1ee8f0;
    }
    ctx->pc = 0x1EE8E8u;
    {
        const bool branch_taken_0x1ee8e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8E8u;
        // 0x1ee8ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8e8) {
            ctx->pc = 0x1EE898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee898;
        }
    }
    ctx->pc = 0x1EE8F0u;
label_1ee8f0:
    // 0x1ee8f0: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x1ee8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1ee8f4:
    // 0x1ee8f4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1ee8f8:
    if (ctx->pc == 0x1EE8F8u) {
        ctx->pc = 0x1EE8FCu;
        goto label_1ee8fc;
    }
    ctx->pc = 0x1EE8F4u;
    {
        const bool branch_taken_0x1ee8f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee8f4) {
            ctx->pc = 0x1EE918u;
            goto label_1ee918;
        }
    }
    ctx->pc = 0x1EE8FCu;
label_1ee8fc:
    // 0x1ee8fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1ee900:
    if (ctx->pc == 0x1EE900u) {
        ctx->pc = 0x1EE904u;
        goto label_1ee904;
    }
    ctx->pc = 0x1EE8FCu;
    {
        const bool branch_taken_0x1ee8fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee8fc) {
            ctx->pc = 0x1EE910u;
            goto label_1ee910;
        }
    }
    ctx->pc = 0x1EE904u;
label_1ee904:
    // 0x1ee904: 0xc0741a8  jal         func_1D06A0
label_1ee908:
    if (ctx->pc == 0x1EE908u) {
        ctx->pc = 0x1EE90Cu;
        goto label_1ee90c;
    }
    ctx->pc = 0x1EE904u;
    SET_GPR_U32(ctx, 31, 0x1EE90Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x1EE904u, 0x1EE90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE90Cu;
label_1ee90c:
    // 0x1ee90c: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x1ee90cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_1ee910:
    // 0x1ee910: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1ee910u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_1ee914:
    // 0x1ee914: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x1ee914u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_1ee918:
    // 0x1ee918: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1ee918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1ee91c:
    // 0x1ee91c: 0xa6430010  sh          $v1, 0x10($s2)
    ctx->pc = 0x1ee91cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
label_1ee920:
    // 0x1ee920: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ee920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ee924:
    // 0x1ee924: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ee924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ee928:
    // 0x1ee928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee92c:
    // 0x1ee92c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee92cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee930:
    // 0x1ee930: 0x3e00008  jr          $ra
label_1ee934:
    if (ctx->pc == 0x1EE934u) {
        ctx->pc = 0x1EE934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE930u;
        // 0x1ee934: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EE938u;
        goto label_fallthrough_0x1ee930;
    }
    ctx->pc = 0x1EE930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE930u;
        // 0x1ee934: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ee930:
    ctx->pc = 0x1EE938u;
}
