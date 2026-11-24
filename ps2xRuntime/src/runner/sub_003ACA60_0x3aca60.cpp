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

// Function: sub_003ACA60
// Address: 0x3aca60 - 0x3acbfc
void sub_003ACA60_0x3aca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACA60_0x3aca60");
#endif

    switch (ctx->pc) {
        case 0x3acac8u: goto label_3acac8;
        case 0x3acbdcu: goto label_3acbdc;
        default: break;
    }

    ctx->pc = 0x3aca60u;

    // 0x3aca60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3aca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3aca64: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3aca64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3aca68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3aca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3aca6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3aca6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3aca70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3aca70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3aca74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3aca74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aca78: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3aca78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aca7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3aca7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3aca80: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x3aca80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3aca84: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3aca84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3aca88: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3aca88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3aca8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3aca8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3aca90: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x3aca90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3aca94: 0x2484d5e0  addiu       $a0, $a0, -0x2A20
    ctx->pc = 0x3aca94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956512));
    // 0x3aca98: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3aca98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3aca9c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3aca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3acaa0: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x3acaa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3acaa4: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3acaa4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3acaa8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ACAA8u;
    {
        const bool branch_taken_0x3acaa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3ACAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAA8u;
        // 0x3acaac: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acaa8) {
            ctx->pc = 0x3ACAB8u;
            goto label_3acab8;
        }
    }
    ctx->pc = 0x3ACAB0u;
    // 0x3acab0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x3ACAB0u;
    {
        const bool branch_taken_0x3acab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3acab0) {
            ctx->pc = 0x3ACBE0u;
            goto label_3acbe0;
        }
    }
    ctx->pc = 0x3ACAB8u;
label_3acab8:
    // 0x3acab8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3acab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3acabc: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x3acabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x3acac0: 0xc05e360  jal         func_178D80
    ctx->pc = 0x3ACAC0u;
    SET_GPR_U32(ctx, 31, 0x3ACAC8u);
    ctx->pc = 0x3ACAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACAC0u;
    // 0x3acac4: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x3ACAC0u, 0x3ACAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACAC8u;
label_3acac8:
    // 0x3acac8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3acac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acacc: 0x10a00044  beqz        $a1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3ACACCu;
    {
        const bool branch_taken_0x3acacc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACACCu;
        // 0x3acad0: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acacc) {
            ctx->pc = 0x3ACBE0u;
            goto label_3acbe0;
        }
    }
    ctx->pc = 0x3ACAD4u;
    // 0x3acad4: 0x3c022028  lui         $v0, 0x2028
    ctx->pc = 0x3acad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8232 << 16));
    // 0x3acad8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3acad8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3acadc: 0x34420156  ori         $v0, $v0, 0x156
    ctx->pc = 0x3acadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)342);
    // 0x3acae0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3acae0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3acae4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3acae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3acae8: 0x8e67001c  lw          $a3, 0x1C($s3)
    ctx->pc = 0x3acae8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x3acaec: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3acaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x3acaf0: 0x34432000  ori         $v1, $v0, 0x2000
    ctx->pc = 0x3acaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3acaf4: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x3acaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x3acaf8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3acaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3acafc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3acafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acb00: 0xaca70010  sw          $a3, 0x10($a1)
    ctx->pc = 0x3acb00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 7));
    // 0x3acb04: 0x96070000  lhu         $a3, 0x0($s0)
    ctx->pc = 0x3acb04u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3acb08: 0xa4a70014  sh          $a3, 0x14($a1)
    ctx->pc = 0x3acb08u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 7));
    // 0x3acb0c: 0xa4a00016  sh          $zero, 0x16($a1)
    ctx->pc = 0x3acb0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x3acb10: 0x96080004  lhu         $t0, 0x4($s0)
    ctx->pc = 0x3acb10u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3acb14: 0x96070006  lhu         $a3, 0x6($s0)
    ctx->pc = 0x3acb14u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3acb18: 0x1124021  addu        $t0, $t0, $s2
    ctx->pc = 0x3acb18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x3acb1c: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x3acb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x3acb20: 0x25080700  addiu       $t0, $t0, 0x700
    ctx->pc = 0x3acb20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1792));
    // 0x3acb24: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x3acb24u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x3acb28: 0x24e70f20  addiu       $a3, $a3, 0xF20
    ctx->pc = 0x3acb28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3872));
    // 0x3acb2c: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x3acb2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3acb30: 0x73cc0  sll         $a3, $a3, 19
    ctx->pc = 0x3acb30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 19));
    // 0x3acb34: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x3acb34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x3acb38: 0xaca70020  sw          $a3, 0x20($a1)
    ctx->pc = 0x3acb38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 7));
    // 0x3acb3c: 0x96070008  lhu         $a3, 0x8($s0)
    ctx->pc = 0x3acb3cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3acb40: 0xaca70024  sw          $a3, 0x24($a1)
    ctx->pc = 0x3acb40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 7));
    // 0x3acb44: 0x9608000e  lhu         $t0, 0xE($s0)
    ctx->pc = 0x3acb44u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3acb48: 0x96070010  lhu         $a3, 0x10($s0)
    ctx->pc = 0x3acb48u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3acb4c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x3acb4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x3acb50: 0x73d00  sll         $a3, $a3, 20
    ctx->pc = 0x3acb50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x3acb54: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x3acb54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x3acb58: 0xaca70028  sw          $a3, 0x28($a1)
    ctx->pc = 0x3acb58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 7));
    // 0x3acb5c: 0x9608000a  lhu         $t0, 0xA($s0)
    ctx->pc = 0x3acb5cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3acb60: 0x9607000c  lhu         $a3, 0xC($s0)
    ctx->pc = 0x3acb60u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3acb64: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x3acb64u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x3acb68: 0x73d00  sll         $a3, $a3, 20
    ctx->pc = 0x3acb68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x3acb6c: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x3acb6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x3acb70: 0xaca70018  sw          $a3, 0x18($a1)
    ctx->pc = 0x3acb70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 7));
    // 0x3acb74: 0x960a000a  lhu         $t2, 0xA($s0)
    ctx->pc = 0x3acb74u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3acb78: 0x9609000e  lhu         $t1, 0xE($s0)
    ctx->pc = 0x3acb78u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3acb7c: 0x9608000c  lhu         $t0, 0xC($s0)
    ctx->pc = 0x3acb7cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3acb80: 0x96070010  lhu         $a3, 0x10($s0)
    ctx->pc = 0x3acb80u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3acb84: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x3acb84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3acb88: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x3acb88u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x3acb8c: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x3acb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x3acb90: 0x73d00  sll         $a3, $a3, 20
    ctx->pc = 0x3acb90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x3acb94: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x3acb94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x3acb98: 0xaca7001c  sw          $a3, 0x1C($a1)
    ctx->pc = 0x3acb98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 7));
    // 0x3acb9c: 0x92090013  lbu         $t1, 0x13($s0)
    ctx->pc = 0x3acb9cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x3acba0: 0x92080014  lbu         $t0, 0x14($s0)
    ctx->pc = 0x3acba0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3acba4: 0x92070015  lbu         $a3, 0x15($s0)
    ctx->pc = 0x3acba4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x3acba8: 0x920a0012  lbu         $t2, 0x12($s0)
    ctx->pc = 0x3acba8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3acbac: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x3acbacu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x3acbb0: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x3acbb0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x3acbb4: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x3acbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x3acbb8: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x3acbb8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x3acbbc: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x3acbbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x3acbc0: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x3acbc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3acbc4: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x3acbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x3acbc8: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x3acbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3acbcc: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x3acbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3acbd0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x3acbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x3acbd4: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3ACBD4u;
    SET_GPR_U32(ctx, 31, 0x3ACBDCu);
    ctx->pc = 0x3ACBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACBD4u;
    // 0x3acbd8: 0xa0a2000f  sb          $v0, 0xF($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3ACBD4u, 0x3ACBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACBDCu;
label_3acbdc:
    // 0x3acbdc: 0x0  nop
    ctx->pc = 0x3acbdcu;
    // NOP
label_3acbe0:
    // 0x3acbe0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3acbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3acbe4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3acbe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3acbe8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3acbe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3acbec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3acbecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3acbf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3acbf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3acbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x3ACBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBF4u;
        // 0x3acbf8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACBFCu;
}
