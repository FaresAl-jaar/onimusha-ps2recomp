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

// Function: sub_0035EB90
// Address: 0x35eb90 - 0x35ee18
void sub_0035EB90_0x35eb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EB90_0x35eb90");
#endif

    switch (ctx->pc) {
        case 0x35ebf0u: goto label_35ebf0;
        case 0x35ec68u: goto label_35ec68;
        case 0x35ed18u: goto label_35ed18;
        case 0x35ed30u: goto label_35ed30;
        case 0x35ed78u: goto label_35ed78;
        case 0x35edb4u: goto label_35edb4;
        default: break;
    }

    ctx->pc = 0x35eb90u;

    // 0x35eb90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35eb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35eb94: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x35eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x35eb98: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x35eb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x35eb9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35eb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35eba0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35eba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35eba4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x35eba4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eba8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35eba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35ebac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35ebacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35ebb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ebb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35ebb4: 0x90922af5  lbu         $s2, 0x2AF5($a0)
    ctx->pc = 0x35ebb4u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10997)));
    // 0x35ebb8: 0x8c8406ac  lw          $a0, 0x6AC($a0)
    ctx->pc = 0x35ebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x35ebbc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35ebbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35ebc0: 0x14600051  bnez        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x35EBC0u;
    {
        const bool branch_taken_0x35ebc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ebc0) {
            ctx->pc = 0x35ED08u;
            goto label_35ed08;
        }
    }
    ctx->pc = 0x35EBC8u;
    // 0x35ebc8: 0x92832af4  lbu         $v1, 0x2AF4($s4)
    ctx->pc = 0x35ebc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10996)));
    // 0x35ebcc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35EBCCu;
    {
        const bool branch_taken_0x35ebcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ebcc) {
            ctx->pc = 0x35EBE0u;
            goto label_35ebe0;
        }
    }
    ctx->pc = 0x35EBD4u;
    // 0x35ebd4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35ebd8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x35EBD8u;
    {
        const bool branch_taken_0x35ebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EBD8u;
        // 0x35ebdc: 0xa2832af4  sb          $v1, 0x2AF4($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 10996), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ebd8) {
            ctx->pc = 0x35ED08u;
            goto label_35ed08;
        }
    }
    ctx->pc = 0x35EBE0u;
label_35ebe0:
    // 0x35ebe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35ebe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ebe4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35ebe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ebe8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x35EBE8u;
    {
        const bool branch_taken_0x35ebe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EBE8u;
        // 0x35ebec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ebe8) {
            ctx->pc = 0x35EC38u;
            goto label_35ec38;
        }
    }
    ctx->pc = 0x35EBF0u;
label_35ebf0:
    // 0x35ebf0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x35ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x35ebf4: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x35ebf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35ebf8: 0x90830241  lbu         $v1, 0x241($a0)
    ctx->pc = 0x35ebf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 577)));
    // 0x35ebfc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x35EBFCu;
    {
        const bool branch_taken_0x35ebfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ebfc) {
            ctx->pc = 0x35EC30u;
            goto label_35ec30;
        }
    }
    ctx->pc = 0x35EC04u;
    // 0x35ec04: 0x90830242  lbu         $v1, 0x242($a0)
    ctx->pc = 0x35ec04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 578)));
    // 0x35ec08: 0x14650009  bne         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35EC08u;
    {
        const bool branch_taken_0x35ec08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x35ec08) {
            ctx->pc = 0x35EC30u;
            goto label_35ec30;
        }
    }
    ctx->pc = 0x35EC10u;
    // 0x35ec10: 0x92832af5  lbu         $v1, 0x2AF5($s4)
    ctx->pc = 0x35ec10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10997)));
    // 0x35ec14: 0x90840243  lbu         $a0, 0x243($a0)
    ctx->pc = 0x35ec14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 579)));
    // 0x35ec18: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x35ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x35ec1c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x35ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35ec20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x35ec24: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x35ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x35ec28: 0xa0643b20  sb          $a0, 0x3B20($v1)
    ctx->pc = 0x35ec28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 15136), (uint8_t)GPR_U32(ctx, 4));
    // 0x35ec2c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x35ec2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_35ec30:
    // 0x35ec30: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x35ec30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x35ec34: 0x0  nop
    ctx->pc = 0x35ec34u;
    // NOP
label_35ec38:
    // 0x35ec38: 0x92830280  lbu         $v1, 0x280($s4)
    ctx->pc = 0x35ec38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 640)));
    // 0x35ec3c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x35ec3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x35ec40: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x35EC40u;
    {
        const bool branch_taken_0x35ec40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ec40) {
            ctx->pc = 0x35EBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ebf0;
        }
    }
    ctx->pc = 0x35EC48u;
    // 0x35ec48: 0x92832af5  lbu         $v1, 0x2AF5($s4)
    ctx->pc = 0x35ec48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10997)));
    // 0x35ec4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35ec4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ec50: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x35ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x35ec54: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x35ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35ec58: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x35ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x35ec5c: 0xa0603b20  sb          $zero, 0x3B20($v1)
    ctx->pc = 0x35ec5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 15136), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ec60: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x35EC60u;
    {
        const bool branch_taken_0x35ec60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EC60u;
        // 0x35ec64: 0xa2800280  sb          $zero, 0x280($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 640), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ec60) {
            ctx->pc = 0x35ECB8u;
            goto label_35ecb8;
        }
    }
    ctx->pc = 0x35EC68u;
label_35ec68:
    // 0x35ec68: 0x8e85085c  lw          $a1, 0x85C($s4)
    ctx->pc = 0x35ec68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2140)));
    // 0x35ec6c: 0x92832af5  lbu         $v1, 0x2AF5($s4)
    ctx->pc = 0x35ec6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10997)));
    // 0x35ec70: 0x132180  sll         $a0, $s3, 6
    ctx->pc = 0x35ec70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x35ec74: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x35ec74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x35ec78: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x35ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x35ec7c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x35ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x35ec80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35ec80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35ec84: 0x24662b10  addiu       $a2, $v1, 0x2B10
    ctx->pc = 0x35ec84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 11024));
    // 0x35ec88: 0x8ca30094  lw          $v1, 0x94($a1)
    ctx->pc = 0x35ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x35ec8c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x35ec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35ec90: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x35ec90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35ec94: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x35ec94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x35ec98: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x35ec98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x35ec9c: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x35ec9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x35eca0: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x35eca0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x35eca4: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x35eca4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x35eca8: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x35eca8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x35ecac: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x35ecacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x35ecb0: 0x7cc30030  sq          $v1, 0x30($a2)
    ctx->pc = 0x35ecb0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 3));
    // 0x35ecb4: 0x0  nop
    ctx->pc = 0x35ecb4u;
    // NOP
label_35ecb8:
    // 0x35ecb8: 0x2a630004  slti        $v1, $s3, 0x4
    ctx->pc = 0x35ecb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35ecbc: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x35ECBCu;
    {
        const bool branch_taken_0x35ecbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ecbc) {
            ctx->pc = 0x35EC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ec68;
        }
    }
    ctx->pc = 0x35ECC4u;
    // 0x35ecc4: 0x92832af5  lbu         $v1, 0x2AF5($s4)
    ctx->pc = 0x35ecc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10997)));
    // 0x35ecc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35eccc: 0xa2832af5  sb          $v1, 0x2AF5($s4)
    ctx->pc = 0x35ecccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10997), (uint8_t)GPR_U32(ctx, 3));
    // 0x35ecd0: 0x92832af5  lbu         $v1, 0x2AF5($s4)
    ctx->pc = 0x35ecd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10997)));
    // 0x35ecd4: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x35ecd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x35ecd8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35ECD8u;
    {
        const bool branch_taken_0x35ecd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ecd8) {
            ctx->pc = 0x35ECE8u;
            goto label_35ece8;
        }
    }
    ctx->pc = 0x35ECE0u;
    // 0x35ece0: 0xa2802af5  sb          $zero, 0x2AF5($s4)
    ctx->pc = 0x35ece0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10997), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ece4: 0x0  nop
    ctx->pc = 0x35ece4u;
    // NOP
label_35ece8:
    // 0x35ece8: 0x92832af6  lbu         $v1, 0x2AF6($s4)
    ctx->pc = 0x35ece8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10998)));
    // 0x35ecec: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x35ececu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x35ecf0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x35ECF0u;
    {
        const bool branch_taken_0x35ecf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ecf0) {
            ctx->pc = 0x35ED00u;
            goto label_35ed00;
        }
    }
    ctx->pc = 0x35ECF8u;
    // 0x35ecf8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35ecfc: 0xa2832af6  sb          $v1, 0x2AF6($s4)
    ctx->pc = 0x35ecfcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10998), (uint8_t)GPR_U32(ctx, 3));
label_35ed00:
    // 0x35ed00: 0xa2802af4  sb          $zero, 0x2AF4($s4)
    ctx->pc = 0x35ed00u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10996), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ed04: 0x0  nop
    ctx->pc = 0x35ed04u;
    // NOP
label_35ed08:
    // 0x35ed08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35ed08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ed0c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x35ED0Cu;
    {
        const bool branch_taken_0x35ed0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35ED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED0Cu;
        // 0x35ed10: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ed0c) {
            ctx->pc = 0x35EDE8u;
            goto label_35ede8;
        }
    }
    ctx->pc = 0x35ED14u;
    // 0x35ed14: 0x0  nop
    ctx->pc = 0x35ed14u;
    // NOP
label_35ed18:
    // 0x35ed18: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x35ed18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x35ed1c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x35ED1Cu;
    {
        const bool branch_taken_0x35ed1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED1Cu;
        // 0x35ed20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ed1c) {
            ctx->pc = 0x35ED90u;
            goto label_35ed90;
        }
    }
    ctx->pc = 0x35ED24u;
    // 0x35ed24: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x35ED24u;
    {
        const bool branch_taken_0x35ed24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ed24) {
            ctx->pc = 0x35ED80u;
            goto label_35ed80;
        }
    }
    ctx->pc = 0x35ED2Cu;
    // 0x35ed2c: 0x0  nop
    ctx->pc = 0x35ed2cu;
    // NOP
label_35ed30:
    // 0x35ed30: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x35ed30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x35ed34: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x35ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35ed38: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x35ed38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x35ed3c: 0x90633b20  lbu         $v1, 0x3B20($v1)
    ctx->pc = 0x35ed3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15136)));
    // 0x35ed40: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x35ED40u;
    {
        const bool branch_taken_0x35ed40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ed40) {
            ctx->pc = 0x35ED90u;
            goto label_35ed90;
        }
    }
    ctx->pc = 0x35ED48u;
    // 0x35ed48: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x35ed48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35ed4c: 0x268401c0  addiu       $a0, $s4, 0x1C0
    ctx->pc = 0x35ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 448));
    // 0x35ed50: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x35ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x35ed54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35ed58: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x35ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35ed5c: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x35ed5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35ed60: 0x8c662af8  lw          $a2, 0x2AF8($v1)
    ctx->pc = 0x35ed60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11000)));
    // 0x35ed64: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x35ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x35ed68: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x35ed68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35ed6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x35ed6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ed70: 0xc09fabc  jal         func_27EAF0
    ctx->pc = 0x35ED70u;
    SET_GPR_U32(ctx, 31, 0x35ED78u);
    ctx->pc = 0x35ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ED70u;
    // 0x35ed74: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EAF0u, 0x35ED70u, 0x35ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ED78u;
label_35ed78:
    // 0x35ed78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35ed78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35ed7c: 0x0  nop
    ctx->pc = 0x35ed7cu;
    // NOP
label_35ed80:
    // 0x35ed80: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x35ed80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x35ed84: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x35ED84u;
    {
        const bool branch_taken_0x35ed84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ed84) {
            ctx->pc = 0x35ED30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ed30;
        }
    }
    ctx->pc = 0x35ED8Cu;
    // 0x35ed8c: 0x0  nop
    ctx->pc = 0x35ed8cu;
    // NOP
label_35ed90:
    // 0x35ed90: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x35ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x35ed94: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x35ed94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35ed98: 0x8c642af8  lw          $a0, 0x2AF8($v1)
    ctx->pc = 0x35ed98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11000)));
    // 0x35ed9c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35ED9Cu;
    {
        const bool branch_taken_0x35ed9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ed9c) {
            ctx->pc = 0x35EDB8u;
            goto label_35edb8;
        }
    }
    ctx->pc = 0x35EDA4u;
    // 0x35eda4: 0x121200  sll         $v0, $s2, 8
    ctx->pc = 0x35eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x35eda8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x35eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x35edac: 0xc0d7bd0  jal         func_35EF40
    ctx->pc = 0x35EDACu;
    SET_GPR_U32(ctx, 31, 0x35EDB4u);
    ctx->pc = 0x35EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EDACu;
    // 0x35edb0: 0x24452b10  addiu       $a1, $v0, 0x2B10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 11024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EF40u, 0x35EDACu, 0x35EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EDB4u;
label_35edb4:
    // 0x35edb4: 0x0  nop
    ctx->pc = 0x35edb4u;
    // NOP
label_35edb8:
    // 0x35edb8: 0x92832af6  lbu         $v1, 0x2AF6($s4)
    ctx->pc = 0x35edb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10998)));
    // 0x35edbc: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x35edbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x35edc0: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x35edc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x35edc4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x35EDC4u;
    {
        const bool branch_taken_0x35edc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35edc4) {
            ctx->pc = 0x35EDF8u;
            goto label_35edf8;
        }
    }
    ctx->pc = 0x35EDCCu;
    // 0x35edcc: 0x2652fffe  addiu       $s2, $s2, -0x2
    ctx->pc = 0x35edccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x35edd0: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x35EDD0u;
    {
        const bool branch_taken_0x35edd0 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x35edd0) {
            ctx->pc = 0x35EDE0u;
            goto label_35ede0;
        }
    }
    ctx->pc = 0x35EDD8u;
    // 0x35edd8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x35edd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x35eddc: 0x0  nop
    ctx->pc = 0x35eddcu;
    // NOP
label_35ede0:
    // 0x35ede0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x35ede0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x35ede4: 0x0  nop
    ctx->pc = 0x35ede4u;
    // NOP
label_35ede8:
    // 0x35ede8: 0x2a630004  slti        $v1, $s3, 0x4
    ctx->pc = 0x35ede8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35edec: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x35EDECu;
    {
        const bool branch_taken_0x35edec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35edec) {
            ctx->pc = 0x35ED18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ed18;
        }
    }
    ctx->pc = 0x35EDF4u;
    // 0x35edf4: 0x0  nop
    ctx->pc = 0x35edf4u;
    // NOP
label_35edf8:
    // 0x35edf8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x35edf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35edfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35edfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35ee00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35ee00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35ee04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35ee04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ee08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35ee08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ee0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35ee0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ee10: 0x3e00008  jr          $ra
    ctx->pc = 0x35EE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE10u;
        // 0x35ee14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EE18u;
}
