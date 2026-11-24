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

// Function: sub_00329DC0
// Address: 0x329dc0 - 0x32a56c
void sub_00329DC0_0x329dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329DC0_0x329dc0");
#endif

    switch (ctx->pc) {
        case 0x329df4u: goto label_329df4;
        case 0x329e40u: goto label_329e40;
        case 0x329e84u: goto label_329e84;
        case 0x329e94u: goto label_329e94;
        case 0x329f90u: goto label_329f90;
        case 0x32a0dcu: goto label_32a0dc;
        case 0x32a120u: goto label_32a120;
        case 0x32a194u: goto label_32a194;
        case 0x32a1dcu: goto label_32a1dc;
        case 0x32a1e8u: goto label_32a1e8;
        case 0x32a200u: goto label_32a200;
        case 0x32a21cu: goto label_32a21c;
        case 0x32a278u: goto label_32a278;
        case 0x32a290u: goto label_32a290;
        case 0x32a298u: goto label_32a298;
        case 0x32a388u: goto label_32a388;
        case 0x32a390u: goto label_32a390;
        case 0x32a3c0u: goto label_32a3c0;
        case 0x32a3c8u: goto label_32a3c8;
        case 0x32a3e0u: goto label_32a3e0;
        case 0x32a3fcu: goto label_32a3fc;
        case 0x32a458u: goto label_32a458;
        case 0x32a470u: goto label_32a470;
        case 0x32a478u: goto label_32a478;
        case 0x32a548u: goto label_32a548;
        default: break;
    }

    ctx->pc = 0x329dc0u;

    // 0x329dc0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x329dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x329dc4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x329dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x329dc8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x329dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x329dcc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x329dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x329dd0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x329dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x329dd4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x329dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x329dd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x329dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x329ddc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x329ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x329de0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x329de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329de4: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x329DE4u;
    {
        const bool branch_taken_0x329de4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x329DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DE4u;
        // 0x329de8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329de4) {
            ctx->pc = 0x329E00u;
            goto label_329e00;
        }
    }
    ctx->pc = 0x329DECu;
    // 0x329dec: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x329DECu;
    SET_GPR_U32(ctx, 31, 0x329DF4u);
    ctx->pc = 0x329DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329DECu;
    // 0x329df0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x329DECu, 0x329DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329DF4u;
label_329df4:
    // 0x329df4: 0x100001d4  b           . + 4 + (0x1D4 << 2)
    ctx->pc = 0x329DF4u;
    {
        const bool branch_taken_0x329df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329df4) {
            ctx->pc = 0x32A548u;
            goto label_32a548;
        }
    }
    ctx->pc = 0x329DFCu;
    // 0x329dfc: 0x0  nop
    ctx->pc = 0x329dfcu;
    // NOP
label_329e00:
    // 0x329e00: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x329e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x329e04: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x329e04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x329e08: 0x102001cf  beqz        $at, . + 4 + (0x1CF << 2)
    ctx->pc = 0x329E08u;
    {
        const bool branch_taken_0x329e08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x329E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E08u;
        // 0x329e0c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329e08) {
            ctx->pc = 0x32A548u;
            goto label_32a548;
        }
    }
    ctx->pc = 0x329E10u;
    // 0x329e10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x329e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x329e14: 0x2484cd40  addiu       $a0, $a0, -0x32C0
    ctx->pc = 0x329e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954304));
    // 0x329e18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x329e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x329e1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x329e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x329e20: 0x600008  jr          $v1
    ctx->pc = 0x329E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x329E28u: goto label_329e28;
            case 0x329E50u: goto label_329e50;
            case 0x329E70u: goto label_329e70;
            case 0x329FA0u: goto label_329fa0;
            case 0x329FC0u: goto label_329fc0;
            case 0x32A070u: goto label_32a070;
            case 0x32A090u: goto label_32a090;
            case 0x32A358u: goto label_32a358;
            case 0x32A378u: goto label_32a378;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329E20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x329E28u;
label_329e28:
    // 0x329e28: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x329e28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x329e2c: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x329e2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x329e30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x329e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329e34: 0x92070605  lbu         $a3, 0x605($s0)
    ctx->pc = 0x329e34u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1541)));
    // 0x329e38: 0xc0aa75c  jal         func_2A9D70
    ctx->pc = 0x329E38u;
    SET_GPR_U32(ctx, 31, 0x329E40u);
    ctx->pc = 0x329E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E38u;
    // 0x329e3c: 0x260805f0  addiu       $t0, $s0, 0x5F0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9D70u, 0x329E38u, 0x329E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E40u;
label_329e40:
    // 0x329e40: 0xae020600  sw          $v0, 0x600($s0)
    ctx->pc = 0x329e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
    // 0x329e44: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x329e44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x329e48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x329e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x329e4c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x329e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_329e50:
    // 0x329e50: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x329e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x329e54: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x329e54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x329e58: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x329e58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x329e5c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x329e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x329e60: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x329e60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x329e64: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x329e64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x329e68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x329e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x329e6c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x329e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_329e70:
    // 0x329e70: 0x92070605  lbu         $a3, 0x605($s0)
    ctx->pc = 0x329e70u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1541)));
    // 0x329e74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x329e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329e78: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x329e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x329e7c: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x329E7Cu;
    SET_GPR_U32(ctx, 31, 0x329E84u);
    ctx->pc = 0x329E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E7Cu;
    // 0x329e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x329E7Cu, 0x329E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E84u;
label_329e84:
    // 0x329e84: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x329e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x329e88: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x329e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x329e8c: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x329E8Cu;
    SET_GPR_U32(ctx, 31, 0x329E94u);
    ctx->pc = 0x329E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E8Cu;
    // 0x329e90: 0x260605f0  addiu       $a2, $s0, 0x5F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x329E8Cu, 0x329E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E94u;
label_329e94:
    // 0x329e94: 0x86030512  lh          $v1, 0x512($s0)
    ctx->pc = 0x329e94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x329e98: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x329E98u;
    {
        const bool branch_taken_0x329e98 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x329E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E98u;
        // 0x329e9c: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329e98) {
            ctx->pc = 0x329EA8u;
            goto label_329ea8;
        }
    }
    ctx->pc = 0x329EA0u;
    // 0x329ea0: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x329ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x329ea4: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x329ea4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
label_329ea8:
    // 0x329ea8: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x329ea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x329eac: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x329eacu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x329eb0: 0x0  nop
    ctx->pc = 0x329eb0u;
    // NOP
    // 0x329eb4: 0x0  nop
    ctx->pc = 0x329eb4u;
    // NOP
    // 0x329eb8: 0x1810  mfhi        $v1
    ctx->pc = 0x329eb8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x329ebc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x329EBCu;
    {
        const bool branch_taken_0x329ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329ebc) {
            ctx->pc = 0x329EE8u;
            goto label_329ee8;
        }
    }
    ctx->pc = 0x329EC4u;
    // 0x329ec4: 0x92030606  lbu         $v1, 0x606($s0)
    ctx->pc = 0x329ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x329ec8: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x329ec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x329ecc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x329ECCu;
    {
        const bool branch_taken_0x329ecc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x329ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329ECCu;
        // 0x329ed0: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329ecc) {
            ctx->pc = 0x329EE8u;
            goto label_329ee8;
        }
    }
    ctx->pc = 0x329ED4u;
    // 0x329ed4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x329ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x329ed8: 0xa2040606  sb          $a0, 0x606($s0)
    ctx->pc = 0x329ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1542), (uint8_t)GPR_U32(ctx, 4));
    // 0x329edc: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x329edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x329ee0: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x329ee0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x329ee4: 0x7c830550  sq          $v1, 0x550($a0)
    ctx->pc = 0x329ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1360), GPR_VEC(ctx, 3));
label_329ee8:
    // 0x329ee8: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x329ee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x329eec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x329EECu;
    {
        const bool branch_taken_0x329eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x329EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EECu;
        // 0x329ef0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329eec) {
            ctx->pc = 0x329F00u;
            goto label_329f00;
        }
    }
    ctx->pc = 0x329EF4u;
    // 0x329ef4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x329EF4u;
    {
        const bool branch_taken_0x329ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329ef4) {
            ctx->pc = 0x329F80u;
            goto label_329f80;
        }
    }
    ctx->pc = 0x329EFCu;
    // 0x329efc: 0x0  nop
    ctx->pc = 0x329efcu;
    // NOP
label_329f00:
    // 0x329f00: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x329f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x329f04: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x329f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x329f08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x329f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x329f0c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x329f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x329f10: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x329f10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x329f14: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x329F14u;
    {
        const bool branch_taken_0x329f14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329f14) {
            ctx->pc = 0x329F50u;
            goto label_329f50;
        }
    }
    ctx->pc = 0x329F1Cu;
    // 0x329f1c: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x329f1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x329f20: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x329f20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x329f24: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x329F24u;
    {
        const bool branch_taken_0x329f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x329F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F24u;
        // 0x329f28: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329f24) {
            ctx->pc = 0x329F78u;
            goto label_329f78;
        }
    }
    ctx->pc = 0x329F2Cu;
    // 0x329f2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329f30: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x329f30u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x329f34: 0x0  nop
    ctx->pc = 0x329f34u;
    // NOP
    // 0x329f38: 0x0  nop
    ctx->pc = 0x329f38u;
    // NOP
    // 0x329f3c: 0x2010  mfhi        $a0
    ctx->pc = 0x329f3cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x329f40: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x329f40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x329f44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x329F44u;
    {
        const bool branch_taken_0x329f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F44u;
        // 0x329f48: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329f44) {
            ctx->pc = 0x329F78u;
            goto label_329f78;
        }
    }
    ctx->pc = 0x329F4Cu;
    // 0x329f4c: 0x0  nop
    ctx->pc = 0x329f4cu;
    // NOP
label_329f50:
    // 0x329f50: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x329f50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x329f54: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x329f54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x329f58: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x329F58u;
    {
        const bool branch_taken_0x329f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329f58) {
            ctx->pc = 0x329F78u;
            goto label_329f78;
        }
    }
    ctx->pc = 0x329F60u;
    // 0x329f60: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x329f60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x329f64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329f68: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x329f68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x329f6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x329F6Cu;
    {
        const bool branch_taken_0x329f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F6Cu;
        // 0x329f70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329f6c) {
            ctx->pc = 0x329F80u;
            goto label_329f80;
        }
    }
    ctx->pc = 0x329F74u;
    // 0x329f74: 0x0  nop
    ctx->pc = 0x329f74u;
    // NOP
label_329f78:
    // 0x329f78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329f7c: 0x0  nop
    ctx->pc = 0x329f7cu;
    // NOP
label_329f80:
    // 0x329f80: 0x14600171  bnez        $v1, . + 4 + (0x171 << 2)
    ctx->pc = 0x329F80u;
    {
        const bool branch_taken_0x329f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329f80) {
            ctx->pc = 0x32A548u;
            goto label_32a548;
        }
    }
    ctx->pc = 0x329F88u;
    // 0x329f88: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x329F88u;
    SET_GPR_U32(ctx, 31, 0x329F90u);
    ctx->pc = 0x329F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329F88u;
    // 0x329f8c: 0x8e040600  lw          $a0, 0x600($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x329F88u, 0x329F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329F90u;
label_329f90:
    // 0x329f90: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x329f90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x329f94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329f98: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x329F98u;
    {
        const bool branch_taken_0x329f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329F98u;
        // 0x329f9c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329f98) {
            ctx->pc = 0x32A548u;
            goto label_32a548;
        }
    }
    ctx->pc = 0x329FA0u;
label_329fa0:
    // 0x329fa0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x329fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x329fa4: 0xa6030512  sh          $v1, 0x512($s0)
    ctx->pc = 0x329fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x329fa8: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x329fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x329fac: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x329facu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x329fb0: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x329fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x329fb4: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x329fb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x329fb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329fbc: 0xa2030521  sb          $v1, 0x521($s0)
    ctx->pc = 0x329fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
label_329fc0:
    // 0x329fc0: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x329fc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x329fc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x329FC4u;
    {
        const bool branch_taken_0x329fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x329FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FC4u;
        // 0x329fc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329fc4) {
            ctx->pc = 0x329FD8u;
            goto label_329fd8;
        }
    }
    ctx->pc = 0x329FCCu;
    // 0x329fcc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x329FCCu;
    {
        const bool branch_taken_0x329fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329fcc) {
            ctx->pc = 0x32A058u;
            goto label_32a058;
        }
    }
    ctx->pc = 0x329FD4u;
    // 0x329fd4: 0x0  nop
    ctx->pc = 0x329fd4u;
    // NOP
label_329fd8:
    // 0x329fd8: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x329fd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x329fdc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x329fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x329fe0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x329fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x329fe4: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x329fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x329fe8: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x329fe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x329fec: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x329FECu;
    {
        const bool branch_taken_0x329fec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329fec) {
            ctx->pc = 0x32A028u;
            goto label_32a028;
        }
    }
    ctx->pc = 0x329FF4u;
    // 0x329ff4: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x329ff4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x329ff8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x329ff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x329ffc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x329FFCu;
    {
        const bool branch_taken_0x329ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FFCu;
        // 0x32a000: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329ffc) {
            ctx->pc = 0x32A050u;
            goto label_32a050;
        }
    }
    ctx->pc = 0x32A004u;
    // 0x32a004: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a008: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x32a008u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x32a00c: 0x0  nop
    ctx->pc = 0x32a00cu;
    // NOP
    // 0x32a010: 0x0  nop
    ctx->pc = 0x32a010u;
    // NOP
    // 0x32a014: 0x2010  mfhi        $a0
    ctx->pc = 0x32a014u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x32a018: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x32a018u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x32a01c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32A01Cu;
    {
        const bool branch_taken_0x32a01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A01Cu;
        // 0x32a020: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a01c) {
            ctx->pc = 0x32A050u;
            goto label_32a050;
        }
    }
    ctx->pc = 0x32A024u;
    // 0x32a024: 0x0  nop
    ctx->pc = 0x32a024u;
    // NOP
label_32a028:
    // 0x32a028: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x32a028u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x32a02c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x32a02cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x32a030: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32A030u;
    {
        const bool branch_taken_0x32a030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a030) {
            ctx->pc = 0x32A050u;
            goto label_32a050;
        }
    }
    ctx->pc = 0x32A038u;
    // 0x32a038: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x32a038u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x32a03c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a040: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x32a040u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a044: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32A044u;
    {
        const bool branch_taken_0x32a044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A044u;
        // 0x32a048: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a044) {
            ctx->pc = 0x32A058u;
            goto label_32a058;
        }
    }
    ctx->pc = 0x32A04Cu;
    // 0x32a04c: 0x0  nop
    ctx->pc = 0x32a04cu;
    // NOP
label_32a050:
    // 0x32a050: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a054: 0x0  nop
    ctx->pc = 0x32a054u;
    // NOP
label_32a058:
    // 0x32a058: 0x1460013b  bnez        $v1, . + 4 + (0x13B << 2)
    ctx->pc = 0x32A058u;
    {
        const bool branch_taken_0x32a058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a058) {
            ctx->pc = 0x32A548u;
            goto label_32a548;
        }
    }
    ctx->pc = 0x32A060u;
    // 0x32a060: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x32a060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x32a064: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32a064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32a068: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x32A068u;
    {
        const bool branch_taken_0x32a068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A068u;
        // 0x32a06c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a068) {
            ctx->pc = 0x32A548u;
            goto label_32a548;
        }
    }
    ctx->pc = 0x32A070u;
label_32a070:
    // 0x32a070: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x32a070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x32a074: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x32a074u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x32a078: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x32a078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a07c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x32a07cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x32a080: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x32a080u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x32a084: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x32a084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x32a088: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32a08c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x32a08cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_32a090:
    // 0x32a090: 0x86020510  lh          $v0, 0x510($s0)
    ctx->pc = 0x32a090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x32a094: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x32a094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x32a098: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x32A098u;
    {
        const bool branch_taken_0x32a098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a098) {
            ctx->pc = 0x32A1E0u;
            goto label_32a1e0;
        }
    }
    ctx->pc = 0x32A0A0u;
    // 0x32a0a0: 0x92020606  lbu         $v0, 0x606($s0)
    ctx->pc = 0x32a0a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x32a0a4: 0x1840004e  blez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x32A0A4u;
    {
        const bool branch_taken_0x32a0a4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x32a0a4) {
            ctx->pc = 0x32A1E0u;
            goto label_32a1e0;
        }
    }
    ctx->pc = 0x32A0ACu;
    // 0x32a0ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32a0b0: 0xa2020606  sb          $v0, 0x606($s0)
    ctx->pc = 0x32a0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1542), (uint8_t)GPR_U32(ctx, 2));
    // 0x32a0b4: 0x92030606  lbu         $v1, 0x606($s0)
    ctx->pc = 0x32a0b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x32a0b8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x32a0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32a0bc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32A0BCu;
    {
        const bool branch_taken_0x32a0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a0bc) {
            ctx->pc = 0x32A108u;
            goto label_32a108;
        }
    }
    ctx->pc = 0x32A0C4u;
    // 0x32a0c4: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x32a0c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x32a0c8: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x32a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x32a0cc: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x32a0ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x32a0d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a0d4: 0xc0a99d8  jal         func_2A6760
    ctx->pc = 0x32A0D4u;
    SET_GPR_U32(ctx, 31, 0x32A0DCu);
    ctx->pc = 0x32A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A0D4u;
    // 0x32a0d8: 0x24460550  addiu       $a2, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6760u, 0x32A0D4u, 0x32A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A0DCu;
label_32a0dc:
    // 0x32a0dc: 0x92030606  lbu         $v1, 0x606($s0)
    ctx->pc = 0x32a0dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x32a0e0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x32a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x32a0e4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x32a0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x32a0e8: 0xac620560  sw          $v0, 0x560($v1)
    ctx->pc = 0x32a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1376), GPR_U32(ctx, 2));
    // 0x32a0ec: 0x92020606  lbu         $v0, 0x606($s0)
    ctx->pc = 0x32a0ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x32a0f0: 0x92030604  lbu         $v1, 0x604($s0)
    ctx->pc = 0x32a0f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x32a0f4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x32a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x32a0f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x32a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32a0fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x32A0FCu;
    {
        const bool branch_taken_0x32a0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A0FCu;
        // 0x32a100: 0xa0430566  sb          $v1, 0x566($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1382), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a0fc) {
            ctx->pc = 0x32A148u;
            goto label_32a148;
        }
    }
    ctx->pc = 0x32A104u;
    // 0x32a104: 0x0  nop
    ctx->pc = 0x32a104u;
    // NOP
label_32a108:
    // 0x32a108: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x32a108u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x32a10c: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x32a10cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x32a110: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x32a110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x32a114: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32a114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32a118: 0xc0a99c8  jal         func_2A6720
    ctx->pc = 0x32A118u;
    SET_GPR_U32(ctx, 31, 0x32A120u);
    ctx->pc = 0x32A11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A118u;
    // 0x32a11c: 0x24460550  addiu       $a2, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6720u, 0x32A118u, 0x32A120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A120u;
label_32a120:
    // 0x32a120: 0x92030606  lbu         $v1, 0x606($s0)
    ctx->pc = 0x32a120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x32a124: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x32a124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x32a128: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x32a128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x32a12c: 0xac620560  sw          $v0, 0x560($v1)
    ctx->pc = 0x32a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1376), GPR_U32(ctx, 2));
    // 0x32a130: 0x92020606  lbu         $v0, 0x606($s0)
    ctx->pc = 0x32a130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x32a134: 0x92030604  lbu         $v1, 0x604($s0)
    ctx->pc = 0x32a134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x32a138: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x32a138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x32a13c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x32a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32a140: 0xa0430566  sb          $v1, 0x566($v0)
    ctx->pc = 0x32a140u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1382), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a144: 0x0  nop
    ctx->pc = 0x32a144u;
    // NOP
label_32a148:
    // 0x32a148: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x32A148u;
    {
        const bool branch_taken_0x32a148 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a148) {
            ctx->pc = 0x32A1E0u;
            goto label_32a1e0;
        }
    }
    ctx->pc = 0x32A150u;
    // 0x32a150: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x32a150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32a154: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32a158: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x32A158u;
    {
        const bool branch_taken_0x32a158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32a158) {
            ctx->pc = 0x32A198u;
            goto label_32a198;
        }
    }
    ctx->pc = 0x32A160u;
    // 0x32a160: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x32a160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x32a164: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32a164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32a168: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x32a168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x32a16c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x32a16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x32a170: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32a170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a174: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x32a174u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x32a178: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x32a178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32a17c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32a17cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a180: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32a180u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a184: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32a184u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a188: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32a188u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a18c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x32A18Cu;
    SET_GPR_U32(ctx, 31, 0x32A194u);
    ctx->pc = 0x32A190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A18Cu;
    // 0x32a190: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x32A18Cu, 0x32A194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A194u;
label_32a194:
    // 0x32a194: 0x0  nop
    ctx->pc = 0x32a194u;
    // NOP
label_32a198:
    // 0x32a198: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x32a198u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32a19c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32a1a0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x32A1A0u;
    {
        const bool branch_taken_0x32a1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32a1a0) {
            ctx->pc = 0x32A1E0u;
            goto label_32a1e0;
        }
    }
    ctx->pc = 0x32A1A8u;
    // 0x32a1a8: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x32a1a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x32a1ac: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32a1acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32a1b0: 0x3c022700  lui         $v0, 0x2700
    ctx->pc = 0x32a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9984 << 16));
    // 0x32a1b4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x32a1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x32a1b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32a1b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a1bc: 0x34454702  ori         $a1, $v0, 0x4702
    ctx->pc = 0x32a1bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18178);
    // 0x32a1c0: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x32a1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32a1c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32a1c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a1c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32a1c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a1cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32a1ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a1d0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32a1d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a1d4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x32A1D4u;
    SET_GPR_U32(ctx, 31, 0x32A1DCu);
    ctx->pc = 0x32A1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A1D4u;
    // 0x32a1d8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x32A1D4u, 0x32A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A1DCu;
label_32a1dc:
    // 0x32a1dc: 0x0  nop
    ctx->pc = 0x32a1dcu;
    // NOP
label_32a1e0:
    // 0x32a1e0: 0xc0c0818  jal         func_302060
    ctx->pc = 0x32A1E0u;
    SET_GPR_U32(ctx, 31, 0x32A1E8u);
    ctx->pc = 0x32A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A1E0u;
    // 0x32a1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x32A1E0u, 0x32A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A1E8u;
label_32a1e8:
    // 0x32a1e8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x32A1E8u;
    {
        const bool branch_taken_0x32a1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A1E8u;
        // 0x32a1ec: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a1e8) {
            ctx->pc = 0x32A288u;
            goto label_32a288;
        }
    }
    ctx->pc = 0x32A1F0u;
    // 0x32a1f0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x32a1f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a1f4: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x32a1f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x32a1f8: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x32a1f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x32a1fc: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x32a1fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_32a200:
    // 0x32a200: 0x86820564  lh          $v0, 0x564($s4)
    ctx->pc = 0x32a200u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1380)));
    // 0x32a204: 0x440001c  bltz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x32A204u;
    {
        const bool branch_taken_0x32a204 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x32A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A204u;
        // 0x32a208: 0x28410010  slti        $at, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a204) {
            ctx->pc = 0x32A278u;
            goto label_32a278;
        }
    }
    ctx->pc = 0x32A20Cu;
    // 0x32a20c: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x32A20Cu;
    {
        const bool branch_taken_0x32a20c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a20c) {
            ctx->pc = 0x32A278u;
            goto label_32a278;
        }
    }
    ctx->pc = 0x32A214u;
    // 0x32a214: 0xc096c80  jal         func_25B200
    ctx->pc = 0x32A214u;
    SET_GPR_U32(ctx, 31, 0x32A21Cu);
    ctx->pc = 0x32A218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A214u;
    // 0x32a218: 0x8e840560  lw          $a0, 0x560($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x32A214u, 0x32A21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A21Cu;
label_32a21c:
    // 0x32a21c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32A21Cu;
    {
        const bool branch_taken_0x32a21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A21Cu;
        // 0x32a220: 0x3c010066  lui         $at, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a21c) {
            ctx->pc = 0x32A278u;
            goto label_32a278;
        }
    }
    ctx->pc = 0x32A224u;
    // 0x32a224: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32a224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x32a228: 0x78235c20  lq          $v1, 0x5C20($at)
    ctx->pc = 0x32a228u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
    // 0x32a22c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x32a22cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32a230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32a230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a234: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x32a234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x32a238: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32a238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a23c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x32a23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x32a240: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x32a240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x32a244: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x32a244u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x32a248: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x32a248u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x32a24c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x32a24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x32a250: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x32a250u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x32a254: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x32a254u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x32a258: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x32a258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x32a25c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x32a25cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x32a260: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x32a260u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x32a264: 0x7a820550  lq          $v0, 0x550($s4)
    ctx->pc = 0x32a264u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 1360)));
    // 0x32a268: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x32a268u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x32a26c: 0x92860566  lbu         $a2, 0x566($s4)
    ctx->pc = 0x32a26cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1382)));
    // 0x32a270: 0xc0c079c  jal         func_301E70
    ctx->pc = 0x32A270u;
    SET_GPR_U32(ctx, 31, 0x32A278u);
    ctx->pc = 0x32A274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A270u;
    // 0x32a274: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x32A270u, 0x32A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A278u;
label_32a278:
    // 0x32a278: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x32a278u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x32a27c: 0x2aa20005  slti        $v0, $s5, 0x5
    ctx->pc = 0x32a27cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x32a280: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x32A280u;
    {
        const bool branch_taken_0x32a280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A280u;
        // 0x32a284: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a280) {
            ctx->pc = 0x32A200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a200;
        }
    }
    ctx->pc = 0x32A288u;
label_32a288:
    // 0x32a288: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32a288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a28c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x32a28cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a290:
    // 0x32a290: 0xc096c80  jal         func_25B200
    ctx->pc = 0x32A290u;
    SET_GPR_U32(ctx, 31, 0x32A298u);
    ctx->pc = 0x32A294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A290u;
    // 0x32a294: 0x8e440560  lw          $a0, 0x560($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x32A290u, 0x32A298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A298u;
label_32a298:
    // 0x32a298: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32A298u;
    {
        const bool branch_taken_0x32a298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a298) {
            ctx->pc = 0x32A2B0u;
            goto label_32a2b0;
        }
    }
    ctx->pc = 0x32A2A0u;
    // 0x32a2a0: 0x86430564  lh          $v1, 0x564($s2)
    ctx->pc = 0x32a2a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x32a2a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32a2a8: 0xa6430564  sh          $v1, 0x564($s2)
    ctx->pc = 0x32a2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1380), (uint16_t)GPR_U32(ctx, 3));
    // 0x32a2ac: 0x0  nop
    ctx->pc = 0x32a2acu;
    // NOP
label_32a2b0:
    // 0x32a2b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32a2b4: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x32a2b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x32a2b8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x32A2B8u;
    {
        const bool branch_taken_0x32a2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2B8u;
        // 0x32a2bc: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a2b8) {
            ctx->pc = 0x32A290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a290;
        }
    }
    ctx->pc = 0x32A2C0u;
    // 0x32a2c0: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x32a2c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x32a2c4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x32A2C4u;
    {
        const bool branch_taken_0x32a2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a2c4) {
            ctx->pc = 0x32A338u;
            goto label_32a338;
        }
    }
    ctx->pc = 0x32A2CCu;
    // 0x32a2cc: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x32a2ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x32a2d0: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x32a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x32a2d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32a2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32a2d8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x32a2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x32a2dc: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x32a2dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x32a2e0: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x32A2E0u;
    {
        const bool branch_taken_0x32a2e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32a2e0) {
            ctx->pc = 0x32A318u;
            goto label_32a318;
        }
    }
    ctx->pc = 0x32A2E8u;
    // 0x32a2e8: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x32a2e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x32a2ec: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x32a2ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x32a2f0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x32A2F0u;
    {
        const bool branch_taken_0x32a2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A2F0u;
        // 0x32a2f4: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a2f0) {
            ctx->pc = 0x32A338u;
            goto label_32a338;
        }
    }
    ctx->pc = 0x32A2F8u;
    // 0x32a2f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a2fc: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x32a2fcu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x32a300: 0x0  nop
    ctx->pc = 0x32a300u;
    // NOP
    // 0x32a304: 0x0  nop
    ctx->pc = 0x32a304u;
    // NOP
    // 0x32a308: 0x2010  mfhi        $a0
    ctx->pc = 0x32a308u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x32a30c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x32a30cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x32a310: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32A310u;
    {
        const bool branch_taken_0x32a310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A310u;
        // 0x32a314: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a310) {
            ctx->pc = 0x32A338u;
            goto label_32a338;
        }
    }
    ctx->pc = 0x32A318u;
label_32a318:
    // 0x32a318: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x32a318u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x32a31c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x32a31cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x32a320: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x32A320u;
    {
        const bool branch_taken_0x32a320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a320) {
            ctx->pc = 0x32A338u;
            goto label_32a338;
        }
    }
    ctx->pc = 0x32A328u;
    // 0x32a328: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x32a328u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x32a32c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a330: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x32a330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a334: 0x0  nop
    ctx->pc = 0x32a334u;
    // NOP
label_32a338:
    // 0x32a338: 0x92030606  lbu         $v1, 0x606($s0)
    ctx->pc = 0x32a338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x32a33c: 0x14600082  bnez        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x32A33Cu;
    {
        const bool branch_taken_0x32a33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a33c) {
            ctx->pc = 0x32A548u;
            goto label_32a548;
        }
    }
    ctx->pc = 0x32A344u;
    // 0x32a344: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x32a344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x32a348: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32a348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32a34c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x32A34Cu;
    {
        const bool branch_taken_0x32a34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A34Cu;
        // 0x32a350: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a34c) {
            ctx->pc = 0x32A548u;
            goto label_32a548;
        }
    }
    ctx->pc = 0x32A354u;
    // 0x32a354: 0x0  nop
    ctx->pc = 0x32a354u;
    // NOP
label_32a358:
    // 0x32a358: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x32a358u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x32a35c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x32a35cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x32a360: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x32a360u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a364: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x32a364u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x32a368: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x32a368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x32a36c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x32a36cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x32a370: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32a374: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x32a374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_32a378:
    // 0x32a378: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32a378u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a37c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32a37cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a380: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x32a380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a384: 0x0  nop
    ctx->pc = 0x32a384u;
    // NOP
label_32a388:
    // 0x32a388: 0xc096c80  jal         func_25B200
    ctx->pc = 0x32A388u;
    SET_GPR_U32(ctx, 31, 0x32A390u);
    ctx->pc = 0x32A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A388u;
    // 0x32a38c: 0x8e440560  lw          $a0, 0x560($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x32A388u, 0x32A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A390u;
label_32a390:
    // 0x32a390: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32A390u;
    {
        const bool branch_taken_0x32a390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a390) {
            ctx->pc = 0x32A3A0u;
            goto label_32a3a0;
        }
    }
    ctx->pc = 0x32A398u;
    // 0x32a398: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x32a398u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x32a39c: 0x0  nop
    ctx->pc = 0x32a39cu;
    // NOP
label_32a3a0:
    // 0x32a3a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32a3a4: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x32a3a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x32a3a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x32A3A8u;
    {
        const bool branch_taken_0x32a3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3A8u;
        // 0x32a3ac: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a3a8) {
            ctx->pc = 0x32A388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a388;
        }
    }
    ctx->pc = 0x32A3B0u;
    // 0x32a3b0: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x32A3B0u;
    {
        const bool branch_taken_0x32a3b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3B0u;
        // 0x32a3b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a3b0) {
            ctx->pc = 0x32A3C0u;
            goto label_32a3c0;
        }
    }
    ctx->pc = 0x32A3B8u;
    // 0x32a3b8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x32A3B8u;
    SET_GPR_U32(ctx, 31, 0x32A3C0u);
    ctx->pc = 0x32A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A3B8u;
    // 0x32a3bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x32A3B8u, 0x32A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A3C0u;
label_32a3c0:
    // 0x32a3c0: 0xc0c0818  jal         func_302060
    ctx->pc = 0x32A3C0u;
    SET_GPR_U32(ctx, 31, 0x32A3C8u);
    ctx->pc = 0x32A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A3C0u;
    // 0x32a3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x32A3C0u, 0x32A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A3C8u;
label_32a3c8:
    // 0x32a3c8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x32A3C8u;
    {
        const bool branch_taken_0x32a3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3C8u;
        // 0x32a3cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a3c8) {
            ctx->pc = 0x32A468u;
            goto label_32a468;
        }
    }
    ctx->pc = 0x32A3D0u;
    // 0x32a3d0: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x32a3d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a3d4: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x32a3d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x32a3d8: 0x27b300b0  addiu       $s3, $sp, 0xB0
    ctx->pc = 0x32a3d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x32a3dc: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x32a3dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_32a3e0:
    // 0x32a3e0: 0x86a20564  lh          $v0, 0x564($s5)
    ctx->pc = 0x32a3e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1380)));
    // 0x32a3e4: 0x440001c  bltz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x32A3E4u;
    {
        const bool branch_taken_0x32a3e4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x32A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3E4u;
        // 0x32a3e8: 0x28410010  slti        $at, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a3e4) {
            ctx->pc = 0x32A458u;
            goto label_32a458;
        }
    }
    ctx->pc = 0x32A3ECu;
    // 0x32a3ec: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x32A3ECu;
    {
        const bool branch_taken_0x32a3ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a3ec) {
            ctx->pc = 0x32A458u;
            goto label_32a458;
        }
    }
    ctx->pc = 0x32A3F4u;
    // 0x32a3f4: 0xc096c80  jal         func_25B200
    ctx->pc = 0x32A3F4u;
    SET_GPR_U32(ctx, 31, 0x32A3FCu);
    ctx->pc = 0x32A3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A3F4u;
    // 0x32a3f8: 0x8ea40560  lw          $a0, 0x560($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x32A3F4u, 0x32A3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A3FCu;
label_32a3fc:
    // 0x32a3fc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32A3FCu;
    {
        const bool branch_taken_0x32a3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A3FCu;
        // 0x32a400: 0x3c010066  lui         $at, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a3fc) {
            ctx->pc = 0x32A458u;
            goto label_32a458;
        }
    }
    ctx->pc = 0x32A404u;
    // 0x32a404: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32a404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x32a408: 0x78235c20  lq          $v1, 0x5C20($at)
    ctx->pc = 0x32a408u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
    // 0x32a40c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x32a40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32a410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32a410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a414: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x32a414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x32a418: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32a418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a41c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x32a41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x32a420: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x32a420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x32a424: 0x78225c30  lq          $v0, 0x5C30($at)
    ctx->pc = 0x32a424u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C30u));
    // 0x32a428: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x32a428u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x32a42c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x32a42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x32a430: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x32a430u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x32a434: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x32a434u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x32a438: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x32a438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x32a43c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x32a43cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x32a440: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x32a440u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x32a444: 0x7aa20550  lq          $v0, 0x550($s5)
    ctx->pc = 0x32a444u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 1360)));
    // 0x32a448: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x32a448u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x32a44c: 0x92a60566  lbu         $a2, 0x566($s5)
    ctx->pc = 0x32a44cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1382)));
    // 0x32a450: 0xc0c079c  jal         func_301E70
    ctx->pc = 0x32A450u;
    SET_GPR_U32(ctx, 31, 0x32A458u);
    ctx->pc = 0x32A454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A450u;
    // 0x32a454: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x32A450u, 0x32A458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A458u;
label_32a458:
    // 0x32a458: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32a45c: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x32a45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x32a460: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x32A460u;
    {
        const bool branch_taken_0x32a460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A460u;
        // 0x32a464: 0x26b50020  addiu       $s5, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a460) {
            ctx->pc = 0x32A3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a3e0;
        }
    }
    ctx->pc = 0x32A468u;
label_32a468:
    // 0x32a468: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32a468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a46c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x32a46cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32a470:
    // 0x32a470: 0xc096c80  jal         func_25B200
    ctx->pc = 0x32A470u;
    SET_GPR_U32(ctx, 31, 0x32A478u);
    ctx->pc = 0x32A474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A470u;
    // 0x32a474: 0x8e440560  lw          $a0, 0x560($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x32A470u, 0x32A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A478u;
label_32a478:
    // 0x32a478: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32A478u;
    {
        const bool branch_taken_0x32a478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a478) {
            ctx->pc = 0x32A490u;
            goto label_32a490;
        }
    }
    ctx->pc = 0x32A480u;
    // 0x32a480: 0x86430564  lh          $v1, 0x564($s2)
    ctx->pc = 0x32a480u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x32a484: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32a484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32a488: 0xa6430564  sh          $v1, 0x564($s2)
    ctx->pc = 0x32a488u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1380), (uint16_t)GPR_U32(ctx, 3));
    // 0x32a48c: 0x0  nop
    ctx->pc = 0x32a48cu;
    // NOP
label_32a490:
    // 0x32a490: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32a494: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x32a494u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x32a498: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x32A498u;
    {
        const bool branch_taken_0x32a498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A498u;
        // 0x32a49c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a498) {
            ctx->pc = 0x32A470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a470;
        }
    }
    ctx->pc = 0x32A4A0u;
    // 0x32a4a0: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x32a4a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x32a4a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A4A4u;
    {
        const bool branch_taken_0x32a4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4A4u;
        // 0x32a4a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a4a4) {
            ctx->pc = 0x32A4B8u;
            goto label_32a4b8;
        }
    }
    ctx->pc = 0x32A4ACu;
    // 0x32a4ac: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x32A4ACu;
    {
        const bool branch_taken_0x32a4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a4ac) {
            ctx->pc = 0x32A538u;
            goto label_32a538;
        }
    }
    ctx->pc = 0x32A4B4u;
    // 0x32a4b4: 0x0  nop
    ctx->pc = 0x32a4b4u;
    // NOP
label_32a4b8:
    // 0x32a4b8: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x32a4b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x32a4bc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x32a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x32a4c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32a4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32a4c4: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x32a4c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x32a4c8: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x32a4c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x32a4cc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x32A4CCu;
    {
        const bool branch_taken_0x32a4cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32a4cc) {
            ctx->pc = 0x32A508u;
            goto label_32a508;
        }
    }
    ctx->pc = 0x32A4D4u;
    // 0x32a4d4: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x32a4d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x32a4d8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x32a4d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x32a4dc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x32A4DCu;
    {
        const bool branch_taken_0x32a4dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4DCu;
        // 0x32a4e0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a4dc) {
            ctx->pc = 0x32A530u;
            goto label_32a530;
        }
    }
    ctx->pc = 0x32A4E4u;
    // 0x32a4e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a4e8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x32a4e8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x32a4ec: 0x0  nop
    ctx->pc = 0x32a4ecu;
    // NOP
    // 0x32a4f0: 0x0  nop
    ctx->pc = 0x32a4f0u;
    // NOP
    // 0x32a4f4: 0x2010  mfhi        $a0
    ctx->pc = 0x32a4f4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x32a4f8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x32a4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x32a4fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32A4FCu;
    {
        const bool branch_taken_0x32a4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4FCu;
        // 0x32a500: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a4fc) {
            ctx->pc = 0x32A530u;
            goto label_32a530;
        }
    }
    ctx->pc = 0x32A504u;
    // 0x32a504: 0x0  nop
    ctx->pc = 0x32a504u;
    // NOP
label_32a508:
    // 0x32a508: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x32a508u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x32a50c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x32a50cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x32a510: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32A510u;
    {
        const bool branch_taken_0x32a510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a510) {
            ctx->pc = 0x32A530u;
            goto label_32a530;
        }
    }
    ctx->pc = 0x32A518u;
    // 0x32a518: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x32a518u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x32a51c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a520: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x32a520u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x32a524: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32A524u;
    {
        const bool branch_taken_0x32a524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A524u;
        // 0x32a528: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a524) {
            ctx->pc = 0x32A538u;
            goto label_32a538;
        }
    }
    ctx->pc = 0x32A52Cu;
    // 0x32a52c: 0x0  nop
    ctx->pc = 0x32a52cu;
    // NOP
label_32a530:
    // 0x32a530: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a534: 0x0  nop
    ctx->pc = 0x32a534u;
    // NOP
label_32a538:
    // 0x32a538: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32A538u;
    {
        const bool branch_taken_0x32a538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A538u;
        // 0x32a53c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a538) {
            ctx->pc = 0x32A548u;
            goto label_32a548;
        }
    }
    ctx->pc = 0x32A540u;
    // 0x32a540: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x32A540u;
    SET_GPR_U32(ctx, 31, 0x32A548u);
    ctx->pc = 0x32A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A540u;
    // 0x32a544: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x32A540u, 0x32A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A548u;
label_32a548:
    // 0x32a548: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x32a548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32a54c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x32a54cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32a550: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x32a550u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32a554: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x32a554u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32a558: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32a558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32a55c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32a55cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a560: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32a560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a564: 0x3e00008  jr          $ra
    ctx->pc = 0x32A564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A564u;
        // 0x32a568: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A56Cu;
}
