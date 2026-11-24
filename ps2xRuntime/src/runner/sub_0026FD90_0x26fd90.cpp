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

// Function: sub_0026FD90
// Address: 0x26fd90 - 0x26ff54
void sub_0026FD90_0x26fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FD90_0x26fd90");
#endif

    switch (ctx->pc) {
        case 0x26fdb8u: goto label_26fdb8;
        case 0x26fe54u: goto label_26fe54;
        case 0x26ff1cu: goto label_26ff1c;
        default: break;
    }

    ctx->pc = 0x26fd90u;

    // 0x26fd90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26fd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26fd94: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26fd98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26fd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26fd9c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26fd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26fda0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26fda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26fda4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26fda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26fda8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26fda8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fdac: 0x3c10008c  lui         $s0, 0x8C
    ctx->pc = 0x26fdacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)140 << 16));
    // 0x26fdb0: 0xc095028  jal         func_2540A0
    ctx->pc = 0x26FDB0u;
    SET_GPR_U32(ctx, 31, 0x26FDB8u);
    ctx->pc = 0x26FDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FDB0u;
    // 0x26fdb4: 0x261005e0  addiu       $s0, $s0, 0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2540A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2540A0u, 0x26FDB0u, 0x26FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FDB8u;
label_26fdb8:
    // 0x26fdb8: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x26fdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x26fdbc: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x26fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x26fdc0: 0x902a05ea  lbu         $t2, 0x5EA($at)
    ctx->pc = 0x26fdc0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)FAST_READ8(0x8C05EAu));
    // 0x26fdc4: 0x34642493  ori         $a0, $v1, 0x2493
    ctx->pc = 0x26fdc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x26fdc8: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x26fdc8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x26fdcc: 0xa3100  sll         $a2, $t2, 4
    ctx->pc = 0x26fdccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x26fdd0: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x26fdd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x26fdd4: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x26fdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x26fdd8: 0x0  nop
    ctx->pc = 0x26fdd8u;
    // NOP
    // 0x26fddc: 0x2010  mfhi        $a0
    ctx->pc = 0x26fddcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x26fde0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x26fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x26fde4: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x26fde4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x26fde8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x26fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x26fdec: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FDECu;
    {
        const bool branch_taken_0x26fdec = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x26FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDECu;
        // 0x26fdf0: 0x24881000  addiu       $t0, $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdec) {
            ctx->pc = 0x26FDFCu;
            goto label_26fdfc;
        }
    }
    ctx->pc = 0x26FDF4u;
    // 0x26fdf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26fdf8: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x26fdf8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_26fdfc:
    // 0x26fdfc: 0x368c0  sll         $t5, $v1, 3
    ctx->pc = 0x26fdfcu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x26fe00: 0x3c029249  lui         $v0, 0x9249
    ctx->pc = 0x26fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37449 << 16));
    // 0x26fe04: 0xa60c0  sll         $t4, $t2, 3
    ctx->pc = 0x26fe04u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x26fe08: 0x34432493  ori         $v1, $v0, 0x2493
    ctx->pc = 0x26fe08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9363);
    // 0x26fe0c: 0x6c0018  mult        $zero, $v1, $t4
    ctx->pc = 0x26fe0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x26fe10: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x26fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x26fe14: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x26fe14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x26fe18: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x26fe18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x26fe1c: 0xc5fc2  srl         $t3, $t4, 31
    ctx->pc = 0x26fe1cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x26fe20: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26fe24: 0x3407fffb  ori         $a3, $zero, 0xFFFB
    ctx->pc = 0x26fe24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x26fe28: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x26fe28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fe2c: 0x4810  mfhi        $t1
    ctx->pc = 0x26fe2cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x26fe30: 0xa1fc2  srl         $v1, $t2, 31
    ctx->pc = 0x26fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x26fe34: 0x4a0018  mult        $zero, $v0, $t2
    ctx->pc = 0x26fe34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x26fe38: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x26fe38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x26fe3c: 0x910c3  sra         $v0, $t1, 3
    ctx->pc = 0x26fe3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 3));
    // 0x26fe40: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x26fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x26fe44: 0x1a24821  addu        $t1, $t5, $v0
    ctx->pc = 0x26fe44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x26fe48: 0x1010  mfhi        $v0
    ctx->pc = 0x26fe48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x26fe4c: 0xc09c08c  jal         func_270230
    ctx->pc = 0x26FE4Cu;
    SET_GPR_U32(ctx, 31, 0x26FE54u);
    ctx->pc = 0x26FE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FE4Cu;
    // 0x26fe50: 0x435821  addu        $t3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270230u, 0x26FE4Cu, 0x26FE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE54u;
label_26fe54:
    // 0x26fe54: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FE54u;
    {
        const bool branch_taken_0x26fe54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE54u;
        // 0x26fe58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe54) {
            ctx->pc = 0x26FE68u;
            goto label_26fe68;
        }
    }
    ctx->pc = 0x26FE5Cu;
    // 0x26fe5c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x26FE5Cu;
    {
        const bool branch_taken_0x26fe5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fe5c) {
            ctx->pc = 0x26FF40u;
            goto label_26ff40;
        }
    }
    ctx->pc = 0x26FE64u;
    // 0x26fe64: 0x0  nop
    ctx->pc = 0x26fe64u;
    // NOP
label_26fe68:
    // 0x26fe68: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x26fe68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26fe6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fe70: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x26FE70u;
    {
        const bool branch_taken_0x26fe70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26fe70) {
            ctx->pc = 0x26FEE8u;
            goto label_26fee8;
        }
    }
    ctx->pc = 0x26FE78u;
    // 0x26fe78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FE78u;
    {
        const bool branch_taken_0x26fe78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fe78) {
            ctx->pc = 0x26FE88u;
            goto label_26fe88;
        }
    }
    ctx->pc = 0x26FE80u;
    // 0x26fe80: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x26FE80u;
    {
        const bool branch_taken_0x26fe80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fe80) {
            ctx->pc = 0x26FF38u;
            goto label_26ff38;
        }
    }
    ctx->pc = 0x26FE88u;
label_26fe88:
    // 0x26fe88: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x26fe88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26fe8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26fe90: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x26fe90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x26fe94: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26fe94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26fe98: 0x284100f1  slti        $at, $v0, 0xF1
    ctx->pc = 0x26fe98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)241) ? 1 : 0);
    // 0x26fe9c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FE9Cu;
    {
        const bool branch_taken_0x26fe9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fe9c) {
            ctx->pc = 0x26FEB8u;
            goto label_26feb8;
        }
    }
    ctx->pc = 0x26FEA4u;
    // 0x26fea4: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x26fea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x26fea8: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x26fea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26feac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26feacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26feb0: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x26feb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x26feb4: 0x0  nop
    ctx->pc = 0x26feb4u;
    // NOP
label_26feb8:
    // 0x26feb8: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x26feb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x26febc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26fec0: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x26fec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x26fec4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26fec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26fec8: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x26fec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26fecc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x26feccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26fed0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FED0u;
    {
        const bool branch_taken_0x26fed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fed0) {
            ctx->pc = 0x26FEE8u;
            goto label_26fee8;
        }
    }
    ctx->pc = 0x26FED8u;
    // 0x26fed8: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x26fed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x26fedc: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x26fedcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x26fee0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26fee4: 0xa202000a  sb          $v0, 0xA($s0)
    ctx->pc = 0x26fee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
label_26fee8:
    // 0x26fee8: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x26fee8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x26feec: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x26feecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x26fef0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26fef4: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x26fef4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x26fef8: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x26fef8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x26fefc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26FEFCu;
    {
        const bool branch_taken_0x26fefc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FEFCu;
        // 0x26ff00: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fefc) {
            ctx->pc = 0x26FF20u;
            goto label_26ff20;
        }
    }
    ctx->pc = 0x26FF04u;
    // 0x26ff04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26ff04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff08: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x26ff08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x26ff0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26ff0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26ff10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff14: 0xc063d30  jal         func_18F4C0
    ctx->pc = 0x26FF14u;
    SET_GPR_U32(ctx, 31, 0x26FF1Cu);
    ctx->pc = 0x26FF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF14u;
    // 0x26ff18: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F4C0u, 0x26FF14u, 0x26FF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF1Cu;
label_26ff1c:
    // 0x26ff1c: 0x0  nop
    ctx->pc = 0x26ff1cu;
    // NOP
label_26ff20:
    // 0x26ff20: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x26ff20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x26ff24: 0x284101ed  slti        $at, $v0, 0x1ED
    ctx->pc = 0x26ff24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)493) ? 1 : 0);
    // 0x26ff28: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FF28u;
    {
        const bool branch_taken_0x26ff28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF28u;
        // 0x26ff2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ff28) {
            ctx->pc = 0x26FF38u;
            goto label_26ff38;
        }
    }
    ctx->pc = 0x26FF30u;
    // 0x26ff30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26FF30u;
    {
        const bool branch_taken_0x26ff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ff30) {
            ctx->pc = 0x26FF40u;
            goto label_26ff40;
        }
    }
    ctx->pc = 0x26FF38u;
label_26ff38:
    // 0x26ff38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26ff38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff3c: 0x0  nop
    ctx->pc = 0x26ff3cu;
    // NOP
label_26ff40:
    // 0x26ff40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26ff40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ff44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ff44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ff48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ff48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ff4c: 0x3e00008  jr          $ra
    ctx->pc = 0x26FF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF4Cu;
        // 0x26ff50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FF54u;
}
