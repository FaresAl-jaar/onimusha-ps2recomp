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

// Function: sub_00217A00
// Address: 0x217a00 - 0x217bb8
void sub_00217A00_0x217a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217A00_0x217a00");
#endif

    switch (ctx->pc) {
        case 0x217b40u: goto label_217b40;
        case 0x217b78u: goto label_217b78;
        case 0x217ba8u: goto label_217ba8;
        default: break;
    }

    ctx->pc = 0x217a00u;

    // 0x217a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217a04: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x217a04u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217a0c: 0x8dac1fc0  lw          $t4, 0x1FC0($t5)
    ctx->pc = 0x217a0cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8128)));
    // 0x217a10: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x217a10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x217a14: 0x258b0004  addiu       $t3, $t4, 0x4
    ctx->pc = 0x217a14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x217a18: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x217a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217a1c: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x217a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x217a20: 0x8d63000c  lw          $v1, 0xC($t3)
    ctx->pc = 0x217a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x217a24: 0xc72818  mult        $a1, $a2, $a3
    ctx->pc = 0x217a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x217a28: 0x8dae0038  lw          $t6, 0x38($t5)
    ctx->pc = 0x217a28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 56)));
    // 0x217a2c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x217a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x217a30: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x217a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x217a34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x217A34u;
    {
        const bool branch_taken_0x217a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A34u;
        // 0x217a38: 0x8d69001c  lw          $t1, 0x1C($t3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a34) {
            ctx->pc = 0x217A50u;
            goto label_217a50;
        }
    }
    ctx->pc = 0x217A3Cu;
    // 0x217a3c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x217a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x217a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217a44: 0x34a50f17  ori         $a1, $a1, 0xF17
    ctx->pc = 0x217a44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3863);
    // 0x217a48: 0x80848e0  j           func_212380
    ctx->pc = 0x217A48u;
    ctx->pc = 0x217A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A48u;
    // 0x217a4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x217A50u;
label_217a50:
    // 0x217a50: 0x24c5000f  addiu       $a1, $a2, 0xF
    ctx->pc = 0x217a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x217a54: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x217a54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x217a58: 0x28e20000  slti        $v0, $a3, 0x0
    ctx->pc = 0x217a58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x217a5c: 0x24e4000f  addiu       $a0, $a3, 0xF
    ctx->pc = 0x217a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x217a60: 0xa3300b  movn        $a2, $a1, $v1
    ctx->pc = 0x217a60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x217a64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x217a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217a68: 0x82380b  movn        $a3, $a0, $v0
    ctx->pc = 0x217a68u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x217a6c: 0x62903  sra         $a1, $a2, 4
    ctx->pc = 0x217a6cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
    // 0x217a70: 0x15c30005  bne         $t6, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x217A70u;
    {
        const bool branch_taken_0x217a70 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 3));
        ctx->pc = 0x217A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A70u;
        // 0x217a74: 0x71103  sra         $v0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a70) {
            ctx->pc = 0x217A88u;
            goto label_217a88;
        }
    }
    ctx->pc = 0x217A78u;
    // 0x217a78: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x217a78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x217a7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x217A7Cu;
    {
        const bool branch_taken_0x217a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A7Cu;
        // 0x217a80: 0x21280  sll         $v0, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a7c) {
            ctx->pc = 0x217A98u;
            goto label_217a98;
        }
    }
    ctx->pc = 0x217A84u;
    // 0x217a84: 0x0  nop
    ctx->pc = 0x217a84u;
    // NOP
label_217a88:
    // 0x217a88: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x217a88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x217a8c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x217a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x217a90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x217a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217a94: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x217a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_217a98:
    // 0x217a98: 0x244a0040  addiu       $t2, $v0, 0x40
    ctx->pc = 0x217a98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x217a9c: 0x8d630014  lw          $v1, 0x14($t3)
    ctx->pc = 0x217a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x217aa0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x217aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217aa4: 0x8d620018  lw          $v0, 0x18($t3)
    ctx->pc = 0x217aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x217aa8: 0x2467000f  addiu       $a3, $v1, 0xF
    ctx->pc = 0x217aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x217aac: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x217aacu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x217ab0: 0x2446000f  addiu       $a2, $v0, 0xF
    ctx->pc = 0x217ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x217ab4: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x217ab4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x217ab8: 0xe5180b  movn        $v1, $a3, $a1
    ctx->pc = 0x217ab8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x217abc: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x217abcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x217ac0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x217ac0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x217ac4: 0x15c8000a  bne         $t6, $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x217AC4u;
    {
        const bool branch_taken_0x217ac4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 8));
        ctx->pc = 0x217AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AC4u;
        // 0x217ac8: 0x21103  sra         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ac4) {
            ctx->pc = 0x217AF0u;
            goto label_217af0;
        }
    }
    ctx->pc = 0x217ACCu;
    // 0x217acc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x217accu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x217ad0: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x217ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x217ad4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x217ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x217ad8: 0x4a102b  sltu        $v0, $v0, $t2
    ctx->pc = 0x217ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x217adc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x217ADCu;
    {
        const bool branch_taken_0x217adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217adc) {
            ctx->pc = 0x217B10u;
            goto label_217b10;
        }
    }
    ctx->pc = 0x217AE4u;
    // 0x217ae4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x217AE4u;
    {
        const bool branch_taken_0x217ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AE4u;
        // 0x217ae8: 0x8d620020  lw          $v0, 0x20($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ae4) {
            ctx->pc = 0x217B28u;
            goto label_217b28;
        }
    }
    ctx->pc = 0x217AECu;
    // 0x217aec: 0x0  nop
    ctx->pc = 0x217aecu;
    // NOP
label_217af0:
    // 0x217af0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x217af0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x217af4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x217af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x217af8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x217af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217afc: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x217afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x217b00: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x217b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x217b04: 0x4a102b  sltu        $v0, $v0, $t2
    ctx->pc = 0x217b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x217b08: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x217B08u;
    {
        const bool branch_taken_0x217b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217b08) {
            ctx->pc = 0x217B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217B08u;
            // 0x217b0c: 0x8d620020  lw          $v0, 0x20($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217B28u;
            goto label_217b28;
        }
    }
    ctx->pc = 0x217B10u;
label_217b10:
    // 0x217b10: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x217b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x217b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217b18: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x217b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b1c: 0x34a50f18  ori         $a1, $a1, 0xF18
    ctx->pc = 0x217b1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3864);
    // 0x217b20: 0x80848e0  j           func_212380
    ctx->pc = 0x217B20u;
    ctx->pc = 0x217B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B20u;
    // 0x217b24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x217B28u;
label_217b28:
    // 0x217b28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x217B28u;
    {
        const bool branch_taken_0x217b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217b28) {
            ctx->pc = 0x217B68u;
            goto label_217b68;
        }
    }
    ctx->pc = 0x217B30u;
    // 0x217b30: 0x19200018  blez        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x217B30u;
    {
        const bool branch_taken_0x217b30 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x217B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B30u;
        // 0x217b34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b30) {
            ctx->pc = 0x217B94u;
            goto label_217b94;
        }
    }
    ctx->pc = 0x217B38u;
    // 0x217b38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x217b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b3c: 0x25830030  addiu       $v1, $t4, 0x30
    ctx->pc = 0x217b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
label_217b40:
    // 0x217b40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x217b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x217b44: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x217b44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x217b48: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x217b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x217b4c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x217b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x217b50: 0x0  nop
    ctx->pc = 0x217b50u;
    // NOP
    // 0x217b54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x217B54u;
    {
        const bool branch_taken_0x217b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B54u;
        // 0x217b58: 0x8a2021  addu        $a0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b54) {
            ctx->pc = 0x217B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217b40;
        }
    }
    ctx->pc = 0x217B5Cu;
    // 0x217b5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x217B5Cu;
    {
        const bool branch_taken_0x217b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B5Cu;
        // 0x217b60: 0xad890178  sw          $t1, 0x178($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 376), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b5c) {
            ctx->pc = 0x217B98u;
            goto label_217b98;
        }
    }
    ctx->pc = 0x217B64u;
    // 0x217b64: 0x0  nop
    ctx->pc = 0x217b64u;
    // NOP
label_217b68:
    // 0x217b68: 0x5920000b  blezl       $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x217B68u;
    {
        const bool branch_taken_0x217b68 = (GPR_S64(ctx, 9) <= 0);
        if (branch_taken_0x217b68) {
            ctx->pc = 0x217B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217B68u;
            // 0x217b6c: 0xad890178  sw          $t1, 0x178($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 376), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217B98u;
            goto label_217b98;
        }
    }
    ctx->pc = 0x217B70u;
    // 0x217b70: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x217b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b74: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x217b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_217b78:
    // 0x217b78: 0x0  nop
    ctx->pc = 0x217b78u;
    // NOP
    // 0x217b7c: 0x0  nop
    ctx->pc = 0x217b7cu;
    // NOP
    // 0x217b80: 0x0  nop
    ctx->pc = 0x217b80u;
    // NOP
    // 0x217b84: 0x0  nop
    ctx->pc = 0x217b84u;
    // NOP
    // 0x217b88: 0x0  nop
    ctx->pc = 0x217b88u;
    // NOP
    // 0x217b8c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x217B8Cu;
    {
        const bool branch_taken_0x217b8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x217B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B8Cu;
        // 0x217b90: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b8c) {
            ctx->pc = 0x217B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217b78;
        }
    }
    ctx->pc = 0x217B94u;
label_217b94:
    // 0x217b94: 0xad890178  sw          $t1, 0x178($t4)
    ctx->pc = 0x217b94u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 376), GPR_U32(ctx, 9));
label_217b98:
    // 0x217b98: 0x25850030  addiu       $a1, $t4, 0x30
    ctx->pc = 0x217b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
    // 0x217b9c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x217b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ba0: 0xc0864f6  jal         func_2193D8
    ctx->pc = 0x217BA0u;
    SET_GPR_U32(ctx, 31, 0x217BA8u);
    ctx->pc = 0x217BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BA0u;
    // 0x217ba4: 0x25840180  addiu       $a0, $t4, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2193D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2193D8u, 0x217BA0u, 0x217BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BA8u;
label_217ba8:
    // 0x217ba8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x217ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x217BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BB0u;
        // 0x217bb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217BB8u;
}
