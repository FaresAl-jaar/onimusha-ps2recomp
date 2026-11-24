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

// Function: sub_002DBC80
// Address: 0x2dbc80 - 0x2dbe18
void sub_002DBC80_0x2dbc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBC80_0x2dbc80");
#endif

    switch (ctx->pc) {
        case 0x2dbcd0u: goto label_2dbcd0;
        case 0x2dbce8u: goto label_2dbce8;
        case 0x2dbd14u: goto label_2dbd14;
        case 0x2dbd5cu: goto label_2dbd5c;
        default: break;
    }

    ctx->pc = 0x2dbc80u;

    // 0x2dbc80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2dbc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2dbc84: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2dbc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2dbc88: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2dbc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2dbc8c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2dbc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2dbc90: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2dbc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2dbc94: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2dbc94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dbc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2dbc9c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2dbc9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbca0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dbca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2dbca4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2dbca4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbca8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dbca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dbcac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2dbcacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbcb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dbcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dbcb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dbcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dbcb8: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x2dbcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2dbcbc: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x2dbcbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dbcc0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2dbcc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dbcc4: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x2DBCC4u;
    {
        const bool branch_taken_0x2dbcc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBCC4u;
        // 0x2dbcc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbcc4) {
            ctx->pc = 0x2DBDE8u;
            goto label_2dbde8;
        }
    }
    ctx->pc = 0x2DBCCCu;
    // 0x2dbccc: 0x0  nop
    ctx->pc = 0x2dbcccu;
    // NOP
label_2dbcd0:
    // 0x2dbcd0: 0x92820013  lbu         $v0, 0x13($s4)
    ctx->pc = 0x2dbcd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 19)));
    // 0x2dbcd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2dbcd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbcd8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2dbcd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dbcdc: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x2DBCDCu;
    {
        const bool branch_taken_0x2dbcdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBCDCu;
        // 0x2dbce0: 0x262b818  mult        $s7, $s3, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbcdc) {
            ctx->pc = 0x2DBDD0u;
            goto label_2dbdd0;
        }
    }
    ctx->pc = 0x2DBCE4u;
    // 0x2dbce4: 0x0  nop
    ctx->pc = 0x2dbce4u;
    // NOP
label_2dbce8:
    // 0x2dbce8: 0x2f22021  addu        $a0, $s7, $s2
    ctx->pc = 0x2dbce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x2dbcec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2dbcecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2dbcf0: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x2dbcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x2dbcf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2dbcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dbcf8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2dbcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2dbcfc: 0x2a38021  addu        $s0, $s5, $v1
    ctx->pc = 0x2dbcfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2dbd00: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x2dbd00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2dbd04: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2DBD04u;
    {
        const bool branch_taken_0x2dbd04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DBD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD04u;
        // 0x2dbd08: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd04) {
            ctx->pc = 0x2DBDB8u;
            goto label_2dbdb8;
        }
    }
    ctx->pc = 0x2DBD0Cu;
    // 0x2dbd0c: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x2DBD0Cu;
    SET_GPR_U32(ctx, 31, 0x2DBD14u);
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x2DBD0Cu, 0x2DBD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD14u;
label_2dbd14:
    // 0x2dbd14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DBD14u;
    {
        const bool branch_taken_0x2dbd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd14) {
            ctx->pc = 0x2DBD28u;
            goto label_2dbd28;
        }
    }
    ctx->pc = 0x2DBD1Cu;
    // 0x2dbd1c: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x2dbd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x2dbd20: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2DBD20u;
    {
        const bool branch_taken_0x2dbd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD20u;
        // 0x2dbd24: 0xa6020020  sh          $v0, 0x20($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd20) {
            ctx->pc = 0x2DBDB8u;
            goto label_2dbdb8;
        }
    }
    ctx->pc = 0x2DBD28u;
label_2dbd28:
    // 0x2dbd28: 0x92820012  lbu         $v0, 0x12($s4)
    ctx->pc = 0x2dbd28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x2dbd2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2dbd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2dbd30: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DBD30u;
    {
        const bool branch_taken_0x2dbd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd30) {
            ctx->pc = 0x2DBD88u;
            goto label_2dbd88;
        }
    }
    ctx->pc = 0x2DBD38u;
    // 0x2dbd38: 0x86060026  lh          $a2, 0x26($s0)
    ctx->pc = 0x2dbd38u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x2dbd3c: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DBD3Cu;
    {
        const bool branch_taken_0x2dbd3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD3Cu;
        // 0x2dbd40: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd3c) {
            ctx->pc = 0x2DBD50u;
            goto label_2dbd50;
        }
    }
    ctx->pc = 0x2DBD44u;
    // 0x2dbd44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dbd44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbd48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBD48u;
    {
        const bool branch_taken_0x2dbd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBD48u;
        // 0x2dbd4c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbd48) {
            ctx->pc = 0x2DBD60u;
            goto label_2dbd60;
        }
    }
    ctx->pc = 0x2DBD50u;
label_2dbd50:
    // 0x2dbd50: 0x86040020  lh          $a0, 0x20($s0)
    ctx->pc = 0x2dbd50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2dbd54: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x2DBD54u;
    SET_GPR_U32(ctx, 31, 0x2DBD5Cu);
    ctx->pc = 0x2DBD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBD54u;
    // 0x2dbd58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x2DBD54u, 0x2DBD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBD5Cu;
label_2dbd5c:
    // 0x2dbd5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dbd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2dbd60:
    // 0x2dbd60: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x2dbd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x2dbd64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dbd64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dbd68: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2dbd68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dbd6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2dbd6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2dbd70: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2dbd70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2dbd74: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dbd74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2dbd78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2dbd78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dbd7c: 0x0  nop
    ctx->pc = 0x2dbd7cu;
    // NOP
    // 0x2dbd80: 0xa6020022  sh          $v0, 0x22($s0)
    ctx->pc = 0x2dbd80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dbd84: 0x0  nop
    ctx->pc = 0x2dbd84u;
    // NOP
label_2dbd88:
    // 0x2dbd88: 0x86020020  lh          $v0, 0x20($s0)
    ctx->pc = 0x2dbd88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2dbd8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dbd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dbd90: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x2dbd90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dbd94: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x2dbd94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2dbd98: 0x86020026  lh          $v0, 0x26($s0)
    ctx->pc = 0x2dbd98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x2dbd9c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2dbd9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dbda0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBDA0u;
    {
        const bool branch_taken_0x2dbda0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDA0u;
        // 0x2dbda4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbda0) {
            ctx->pc = 0x2DBDB0u;
            goto label_2dbdb0;
        }
    }
    ctx->pc = 0x2DBDA8u;
    // 0x2dbda8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBDA8u;
    {
        const bool branch_taken_0x2dbda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBDA8u;
        // 0x2dbdac: 0xa6020020  sh          $v0, 0x20($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbda8) {
            ctx->pc = 0x2DBDB8u;
            goto label_2dbdb8;
        }
    }
    ctx->pc = 0x2DBDB0u;
label_2dbdb0:
    // 0x2dbdb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2dbdb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2dbdb4: 0x0  nop
    ctx->pc = 0x2dbdb4u;
    // NOP
label_2dbdb8:
    // 0x2dbdb8: 0x92820013  lbu         $v0, 0x13($s4)
    ctx->pc = 0x2dbdb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 19)));
    // 0x2dbdbc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2dbdbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2dbdc0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2dbdc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dbdc4: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x2DBDC4u;
    {
        const bool branch_taken_0x2dbdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbdc4) {
            ctx->pc = 0x2DBCE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbce8;
        }
    }
    ctx->pc = 0x2DBDCCu;
    // 0x2dbdcc: 0x0  nop
    ctx->pc = 0x2dbdccu;
    // NOP
label_2dbdd0:
    // 0x2dbdd0: 0x8ec20070  lw          $v0, 0x70($s6)
    ctx->pc = 0x2dbdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x2dbdd4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2dbdd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2dbdd8: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x2dbdd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dbddc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2dbddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2dbde0: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x2DBDE0u;
    {
        const bool branch_taken_0x2dbde0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbde0) {
            ctx->pc = 0x2DBCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbcd0;
        }
    }
    ctx->pc = 0x2DBDE8u;
label_2dbde8:
    // 0x2dbde8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dbde8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbdec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2dbdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dbdf0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2dbdf0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dbdf4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2dbdf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dbdf8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2dbdf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dbdfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dbdfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dbe00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dbe00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dbe04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dbe04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dbe08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dbe08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbe0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dbe0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbe10: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE10u;
        // 0x2dbe14: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBE18u;
}
