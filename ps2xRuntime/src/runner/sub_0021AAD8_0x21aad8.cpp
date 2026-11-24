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

// Function: sub_0021AAD8
// Address: 0x21aad8 - 0x21acd4
void sub_0021AAD8_0x21aad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AAD8_0x21aad8");
#endif

    switch (ctx->pc) {
        case 0x21ab10u: goto label_21ab10;
        case 0x21ab24u: goto label_21ab24;
        case 0x21ab38u: goto label_21ab38;
        case 0x21ab58u: goto label_21ab58;
        case 0x21ac08u: goto label_21ac08;
        case 0x21ac18u: goto label_21ac18;
        case 0x21ac44u: goto label_21ac44;
        case 0x21ac9cu: goto label_21ac9c;
        case 0x21aca4u: goto label_21aca4;
        default: break;
    }

    ctx->pc = 0x21aad8u;

    // 0x21aad8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21aad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21aadc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21aadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21aae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21aae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aae4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x21aae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x21aae8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x21aae8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aaec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21aaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21aaf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21aaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21aaf4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21aaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21aaf8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21aaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21aafc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x21aafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x21ab00: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x21ab00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x21ab04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21ab04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21ab08: 0xc043808  jal         func_10E020
    ctx->pc = 0x21AB08u;
    SET_GPR_U32(ctx, 31, 0x21AB10u);
    ctx->pc = 0x21AB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AB08u;
    // 0x21ab0c: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x21AB08u, 0x21AB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AB10u;
label_21ab10:
    // 0x21ab10: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x21ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x21ab14: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21AB14u;
    {
        const bool branch_taken_0x21ab14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ab14) {
            ctx->pc = 0x21AB30u;
            goto label_21ab30;
        }
    }
    ctx->pc = 0x21AB1Cu;
    // 0x21ab1c: 0xc043800  jal         func_10E000
    ctx->pc = 0x21AB1Cu;
    SET_GPR_U32(ctx, 31, 0x21AB24u);
    ctx->pc = 0x21AB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AB1Cu;
    // 0x21ab20: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x21AB1Cu, 0x21AB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AB24u;
label_21ab24:
    // 0x21ab24: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x21AB24u;
    {
        const bool branch_taken_0x21ab24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB24u;
        // 0x21ab28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab24) {
            ctx->pc = 0x21ACA8u;
            goto label_21aca8;
        }
    }
    ctx->pc = 0x21AB2Cu;
    // 0x21ab2c: 0x0  nop
    ctx->pc = 0x21ab2cu;
    // NOP
label_21ab30:
    // 0x21ab30: 0xc0869b4  jal         func_21A6D0
    ctx->pc = 0x21AB30u;
    SET_GPR_U32(ctx, 31, 0x21AB38u);
    ctx->pc = 0x21AB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AB30u;
    // 0x21ab34: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A6D0u, 0x21AB30u, 0x21AB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AB38u;
label_21ab38:
    // 0x21ab38: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x21ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x21ab3c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x21ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x21ab40: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x21ab40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x21ab44: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x21ab44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x21ab48: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x21ab48u;
    SET_GPR_S32(ctx, 21, (int32_t)runtime->Load32(rdram, ctx, 0x1000B400u)); // MMIO: 0x1000b400
    // 0x21ab4c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x21ab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000B410u)); // MMIO: 0x1000b410
    // 0x21ab50: 0xc086986  jal         func_21A618
    ctx->pc = 0x21AB50u;
    SET_GPR_U32(ctx, 31, 0x21AB58u);
    ctx->pc = 0x21AB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AB50u;
    // 0x21ab54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A618u, 0x21AB50u, 0x21AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AB58u;
label_21ab58:
    // 0x21ab58: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x21ab58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21ab5c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x21ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x21ab60: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21ab64: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21AB64u;
    {
        const bool branch_taken_0x21ab64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ab64) {
            ctx->pc = 0x21AB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AB64u;
            // 0x21ab68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AB6Cu;
            goto label_21ab6c;
        }
    }
    ctx->pc = 0x21AB6Cu;
label_21ab6c:
    // 0x21ab6c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x21ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ab70: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x21ab70u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21ab74: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x21ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21ab78: 0x2010  mfhi        $a0
    ctx->pc = 0x21ab78u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x21ab7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21ab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21ab80: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x21ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21ab84: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x21ab84u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21ab88: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x21ab88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x21ab8c: 0x2810  mfhi        $a1
    ctx->pc = 0x21ab8cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x21ab90: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x21ab90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21ab94: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x21ab94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
    // 0x21ab98: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x21ab98u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21ab9c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x21ab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x21aba0: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x21aba0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21aba4: 0x248507ff  addiu       $a1, $a0, 0x7FF
    ctx->pc = 0x21aba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2047));
    // 0x21aba8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21aba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21abac: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x21abacu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x21abb0: 0x29ac3  sra         $s3, $v0, 11
    ctx->pc = 0x21abb0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 11));
    // 0x21abb4: 0x131ac0  sll         $v1, $s3, 11
    ctx->pc = 0x21abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
    // 0x21abb8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x21abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21abbc: 0x8010  mfhi        $s0
    ctx->pc = 0x21abbcu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x21abc0: 0x1a600011  blez        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x21ABC0u;
    {
        const bool branch_taken_0x21abc0 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x21ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABC0u;
        // 0x21abc4: 0xae240014  sw          $a0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21abc0) {
            ctx->pc = 0x21AC08u;
            goto label_21ac08;
        }
    }
    ctx->pc = 0x21ABC8u;
    // 0x21abc8: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x21abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x21abcc: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x21abccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21abd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21abd4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21ABD4u;
    {
        const bool branch_taken_0x21abd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x21abd4) {
            ctx->pc = 0x21ABD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21ABD4u;
            // 0x21abd8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21ABDCu;
            goto label_21abdc;
        }
    }
    ctx->pc = 0x21ABDCu;
label_21abdc:
    // 0x21abdc: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x21abdcu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21abe0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x21abe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21abe4: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x21abe4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21abe8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x21abe8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21abec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21abecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21abf0: 0x2010  mfhi        $a0
    ctx->pc = 0x21abf0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x21abf4: 0x42ac0  sll         $a1, $a0, 11
    ctx->pc = 0x21abf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x21abf8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x21abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x21abfc: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x21abfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x21ac00: 0xc0869ce  jal         func_21A738
    ctx->pc = 0x21AC00u;
    SET_GPR_U32(ctx, 31, 0x21AC08u);
    ctx->pc = 0x21AC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AC00u;
    // 0x21ac04: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A738u, 0x21AC00u, 0x21AC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AC08u;
label_21ac08:
    // 0x21ac08: 0x1a600018  blez        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x21AC08u;
    {
        const bool branch_taken_0x21ac08 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x21AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC08u;
        // 0x21ac0c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac08) {
            ctx->pc = 0x21AC6Cu;
            goto label_21ac6c;
        }
    }
    ctx->pc = 0x21AC10u;
    // 0x21ac10: 0x2674ffff  addiu       $s4, $s3, -0x1
    ctx->pc = 0x21ac10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x21ac14: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x21ac14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21ac18:
    // 0x21ac18: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x21ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x21ac1c: 0x2543826  xor         $a3, $s2, $s4
    ctx->pc = 0x21ac1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 20));
    // 0x21ac20: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21ac24: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x21ac24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x21ac28: 0x102ac0  sll         $a1, $s0, 11
    ctx->pc = 0x21ac28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
    // 0x21ac2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21ac2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ac30: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x21ac30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21ac34: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x21ac34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21ac38: 0x2c7300b  movn        $a2, $s6, $a3
    ctx->pc = 0x21ac38u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 22));
    // 0x21ac3c: 0xc0869ce  jal         func_21A738
    ctx->pc = 0x21AC3Cu;
    SET_GPR_U32(ctx, 31, 0x21AC44u);
    ctx->pc = 0x21AC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AC3Cu;
    // 0x21ac40: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A738u, 0x21AC3Cu, 0x21AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AC44u;
label_21ac44:
    // 0x21ac44: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x21ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21ac48: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x21ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21ac4c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21ac4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21ac50: 0x253282a  slt         $a1, $s2, $s3
    ctx->pc = 0x21ac50u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x21ac54: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x21ac54u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21ac58: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21AC58u;
    {
        const bool branch_taken_0x21ac58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ac58) {
            ctx->pc = 0x21AC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AC58u;
            // 0x21ac5c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AC60u;
            goto label_21ac60;
        }
    }
    ctx->pc = 0x21AC60u;
label_21ac60:
    // 0x21ac60: 0x2010  mfhi        $a0
    ctx->pc = 0x21ac60u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x21ac64: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x21AC64u;
    {
        const bool branch_taken_0x21ac64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC64u;
        // 0x21ac68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac64) {
            ctx->pc = 0x21AC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ac18;
        }
    }
    ctx->pc = 0x21AC6Cu;
label_21ac6c:
    // 0x21ac6c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x21ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21ac70: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x21ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x21ac74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21AC74u;
    {
        const bool branch_taken_0x21ac74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC74u;
        // 0x21ac78: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac74) {
            ctx->pc = 0x21AC9Cu;
            goto label_21ac9c;
        }
    }
    ctx->pc = 0x21AC7Cu;
    // 0x21ac7c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x21AC7Cu;
    {
        const bool branch_taken_0x21ac7c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC7Cu;
        // 0x21ac80: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac7c) {
            ctx->pc = 0x21AC94u;
            goto label_21ac94;
        }
    }
    ctx->pc = 0x21AC84u;
    // 0x21ac84: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x21ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x21ac88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21ac88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21ac8c: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x21ac8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x21ac90: 0x43a825  or          $s5, $v0, $v1
    ctx->pc = 0x21ac90u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21ac94:
    // 0x21ac94: 0xc0869b4  jal         func_21A6D0
    ctx->pc = 0x21AC94u;
    SET_GPR_U32(ctx, 31, 0x21AC9Cu);
    ctx->pc = 0x21AC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AC94u;
    // 0x21ac98: 0x36a40100  ori         $a0, $s5, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A6D0u, 0x21AC94u, 0x21AC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AC9Cu;
label_21ac9c:
    // 0x21ac9c: 0xc043800  jal         func_10E000
    ctx->pc = 0x21AC9Cu;
    SET_GPR_U32(ctx, 31, 0x21ACA4u);
    ctx->pc = 0x21ACA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AC9Cu;
    // 0x21aca0: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x21AC9Cu, 0x21ACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ACA4u;
label_21aca4:
    // 0x21aca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21aca8:
    // 0x21aca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21aca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21acac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21acacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21acb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21acb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21acb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21acb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21acb8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21acb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21acbc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x21acbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21acc0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x21acc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21acc4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x21acc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21acc8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21acc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21accc: 0x3e00008  jr          $ra
    ctx->pc = 0x21ACCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ACCCu;
        // 0x21acd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21ACCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21ACD4u;
}
