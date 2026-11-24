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

// Function: sub_00370F40
// Address: 0x370f40 - 0x3710c4
void sub_00370F40_0x370f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370F40_0x370f40");
#endif

    switch (ctx->pc) {
        case 0x370fb0u: goto label_370fb0;
        case 0x37102cu: goto label_37102c;
        case 0x371058u: goto label_371058;
        case 0x371080u: goto label_371080;
        default: break;
    }

    ctx->pc = 0x370f40u;

    // 0x370f40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x370f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x370f44: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x370f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x370f48: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x370f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x370f4c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x370f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x370f50: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x370f50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370f54: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x370f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x370f58: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x370f58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370f5c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x370f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x370f60: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x370f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x370f64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x370f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x370f68: 0x3c12004e  lui         $s2, 0x4E
    ctx->pc = 0x370f68u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)78 << 16));
    // 0x370f6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x370f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x370f70: 0x26526b38  addiu       $s2, $s2, 0x6B38
    ctx->pc = 0x370f70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 27448));
    // 0x370f74: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x370f74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x370f78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x370f78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370f7c: 0x908401c2  lbu         $a0, 0x1C2($a0)
    ctx->pc = 0x370f7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 450)));
    // 0x370f80: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x370f80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x370f84: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x370f84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x370f88: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x370f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x370f8c: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x370F8Cu;
    {
        const bool branch_taken_0x370f8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x370F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F8Cu;
        // 0x370f90: 0x307400ff  andi        $s4, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f8c) {
            ctx->pc = 0x371098u;
            goto label_371098;
        }
    }
    ctx->pc = 0x370F94u;
    // 0x370f94: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x370f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x370f98: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x370f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x370f9c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x370f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x370fa0: 0x2442ac70  addiu       $v0, $v0, -0x5390
    ctx->pc = 0x370fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945904));
    // 0x370fa4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x370fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x370fa8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x370fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x370fac: 0x0  nop
    ctx->pc = 0x370facu;
    // NOP
label_370fb0:
    // 0x370fb0: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x370fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x370fb4: 0x904501bd  lbu         $a1, 0x1BD($v0)
    ctx->pc = 0x370fb4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 445)));
    // 0x370fb8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x370fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x370fbc: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x370fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x370fc0: 0x2484ac88  addiu       $a0, $a0, -0x5378
    ctx->pc = 0x370fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945928));
    // 0x370fc4: 0x24636940  addiu       $v1, $v1, 0x6940
    ctx->pc = 0x370fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26944));
    // 0x370fc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x370fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x370fcc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x370fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x370fd0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x370fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x370fd4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x370fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x370fd8: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x370fd8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x370fdc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x370fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x370fe0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x370fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x370fe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x370fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x370fe8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x370FE8u;
    {
        const bool branch_taken_0x370fe8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x370FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370FE8u;
        // 0x370fec: 0x629821  addu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370fe8) {
            ctx->pc = 0x371000u;
            goto label_371000;
        }
    }
    ctx->pc = 0x370FF0u;
    // 0x370ff0: 0x12350003  beq         $s1, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x370FF0u;
    {
        const bool branch_taken_0x370ff0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x370FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370FF0u;
        // 0x370ff4: 0x3c023f33  lui         $v0, 0x3F33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370ff0) {
            ctx->pc = 0x371000u;
            goto label_371000;
        }
    }
    ctx->pc = 0x370FF8u;
    // 0x370ff8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x370ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x370ffc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x370ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_371000:
    // 0x371000: 0x1635000b  bne         $s1, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x371000u;
    {
        const bool branch_taken_0x371000 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        if (branch_taken_0x371000) {
            ctx->pc = 0x371030u;
            goto label_371030;
        }
    }
    ctx->pc = 0x371008u;
    // 0x371008: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x371008u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37100c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37100cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371010: 0x8ec90044  lw          $t1, 0x44($s6)
    ctx->pc = 0x371010u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 68)));
    // 0x371014: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x371014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371018: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x371018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x37101c: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x37101cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x371020: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x371020u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x371024: 0xc09c5d8  jal         func_271760
    ctx->pc = 0x371024u;
    SET_GPR_U32(ctx, 31, 0x37102Cu);
    ctx->pc = 0x371028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371024u;
    // 0x371028: 0x240a0021  addiu       $t2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271760u, 0x371024u, 0x37102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37102Cu;
label_37102c:
    // 0x37102c: 0x0  nop
    ctx->pc = 0x37102cu;
    // NOP
label_371030:
    // 0x371030: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x371030u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x371034: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x371034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x371038: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x371038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37103c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37103cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371040: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x371040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x371044: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x371044u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x371048: 0x34498080  ori         $t1, $v0, 0x8080
    ctx->pc = 0x371048u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x37104c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x37104cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x371050: 0xc09c5d8  jal         func_271760
    ctx->pc = 0x371050u;
    SET_GPR_U32(ctx, 31, 0x371058u);
    ctx->pc = 0x371054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371050u;
    // 0x371054: 0x240a0021  addiu       $t2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271760u, 0x371050u, 0x371058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371058u;
label_371058:
    // 0x371058: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x371058u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37105c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x37105cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x371060: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x371060u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x371064: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x371064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371068: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x371068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37106c: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x37106cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x371070: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x371070u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x371074: 0x240a0021  addiu       $t2, $zero, 0x21
    ctx->pc = 0x371074u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x371078: 0xc09c5d8  jal         func_271760
    ctx->pc = 0x371078u;
    SET_GPR_U32(ctx, 31, 0x371080u);
    ctx->pc = 0x37107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371078u;
    // 0x37107c: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x271760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271760u, 0x371078u, 0x371080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371080u;
label_371080:
    // 0x371080: 0x92c301c2  lbu         $v1, 0x1C2($s6)
    ctx->pc = 0x371080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 450)));
    // 0x371084: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x371084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x371088: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x371088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x37108c: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x37108Cu;
    {
        const bool branch_taken_0x37108c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37108Cu;
        // 0x371090: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37108c) {
            ctx->pc = 0x370FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370fb0;
        }
    }
    ctx->pc = 0x371094u;
    // 0x371094: 0x0  nop
    ctx->pc = 0x371094u;
    // NOP
label_371098:
    // 0x371098: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x371098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37109c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x37109cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3710a0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3710a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3710a4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3710a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3710a8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3710a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3710ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3710acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3710b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3710b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3710b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3710b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3710b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3710b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3710bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3710BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3710C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3710BCu;
        // 0x3710c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3710BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3710C4u;
}
