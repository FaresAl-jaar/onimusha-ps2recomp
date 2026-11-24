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

// Function: sub_0030BDB0
// Address: 0x30bdb0 - 0x30bf9c
void sub_0030BDB0_0x30bdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BDB0_0x30bdb0");
#endif

    switch (ctx->pc) {
        case 0x30be30u: goto label_30be30;
        case 0x30bf68u: goto label_30bf68;
        default: break;
    }

    ctx->pc = 0x30bdb0u;

    // 0x30bdb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x30bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x30bdb4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x30bdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x30bdb8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x30bdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x30bdbc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x30bdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x30bdc0: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x30bdc0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bdc4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30bdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30bdc8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x30bdc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bdcc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30bdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30bdd0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x30bdd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bdd4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30bdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30bdd8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x30bdd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bddc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30bddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30bde0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x30bde0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bde4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30bde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30bde8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x30bde8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bdec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30bdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30bdf0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x30bdf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bdf4: 0x90820044  lbu         $v0, 0x44($a0)
    ctx->pc = 0x30bdf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x30bdf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BDF8u;
    {
        const bool branch_taken_0x30bdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDF8u;
        // 0x30bdfc: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bdf8) {
            ctx->pc = 0x30BE08u;
            goto label_30be08;
        }
    }
    ctx->pc = 0x30BE00u;
    // 0x30be00: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x30BE00u;
    {
        const bool branch_taken_0x30be00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE00u;
        // 0x30be04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be00) {
            ctx->pc = 0x30BF70u;
            goto label_30bf70;
        }
    }
    ctx->pc = 0x30BE08u;
label_30be08:
    // 0x30be08: 0x8ec20040  lw          $v0, 0x40($s6)
    ctx->pc = 0x30be08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x30be0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30BE0Cu;
    {
        const bool branch_taken_0x30be0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE0Cu;
        // 0x30be10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be0c) {
            ctx->pc = 0x30BE20u;
            goto label_30be20;
        }
    }
    ctx->pc = 0x30BE14u;
    // 0x30be14: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x30BE14u;
    {
        const bool branch_taken_0x30be14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30be14) {
            ctx->pc = 0x30BF70u;
            goto label_30bf70;
        }
    }
    ctx->pc = 0x30BE1Cu;
    // 0x30be1c: 0x0  nop
    ctx->pc = 0x30be1cu;
    // NOP
label_30be20:
    // 0x30be20: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x30be20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x30be24: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x30be24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x30be28: 0xc05e360  jal         func_178D80
    ctx->pc = 0x30BE28u;
    SET_GPR_U32(ctx, 31, 0x30BE30u);
    ctx->pc = 0x30BE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BE28u;
    // 0x30be2c: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x30BE28u, 0x30BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BE30u;
label_30be30:
    // 0x30be30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BE30u;
    {
        const bool branch_taken_0x30be30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30be30) {
            ctx->pc = 0x30BE40u;
            goto label_30be40;
        }
    }
    ctx->pc = 0x30BE38u;
    // 0x30be38: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x30BE38u;
    {
        const bool branch_taken_0x30be38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE38u;
        // 0x30be3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be38) {
            ctx->pc = 0x30BF70u;
            goto label_30bf70;
        }
    }
    ctx->pc = 0x30BE40u;
label_30be40:
    // 0x30be40: 0x141c3c  dsll32      $v1, $s4, 16
    ctx->pc = 0x30be40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 16));
    // 0x30be44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30be44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30be48: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x30be48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x30be4c: 0x24660700  addiu       $a2, $v1, 0x700
    ctx->pc = 0x30be4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x30be50: 0x172c3c  dsll32      $a1, $s7, 16
    ctx->pc = 0x30be50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) << (32 + 16));
    // 0x30be54: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x30be54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x30be58: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x30be58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x30be5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30be5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30be60: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x30be60u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x30be64: 0x24630f20  addiu       $v1, $v1, 0xF20
    ctx->pc = 0x30be64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3872));
    // 0x30be68: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x30be68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x30be6c: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x30be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x30be70: 0x104e02  srl         $t1, $s0, 24
    ctx->pc = 0x30be70u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x30be74: 0xc33825  or          $a3, $a2, $v1
    ctx->pc = 0x30be74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x30be78: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30be78u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30be7c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x30be7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x30be80: 0x54043  sra         $t0, $a1, 1
    ctx->pc = 0x30be80u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 1));
    // 0x30be84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x30be84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x30be88: 0x3c032028  lui         $v1, 0x2028
    ctx->pc = 0x30be88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8232 << 16));
    // 0x30be8c: 0x34660116  ori         $a2, $v1, 0x116
    ctx->pc = 0x30be8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)278);
    // 0x30be90: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x30be90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x30be94: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x30be94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x30be98: 0x8c4b0004  lw          $t3, 0x4($v0)
    ctx->pc = 0x30be98u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30be9c: 0x346a2000  ori         $t2, $v1, 0x2000
    ctx->pc = 0x30be9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x30bea0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x30bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30bea4: 0x53500  sll         $a2, $a1, 20
    ctx->pc = 0x30bea4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 20));
    // 0x30bea8: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x30bea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x30beac: 0x356b0040  ori         $t3, $t3, 0x40
    ctx->pc = 0x30beacu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)64);
    // 0x30beb0: 0xac4b0004  sw          $t3, 0x4($v0)
    ctx->pc = 0x30beb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 11));
    // 0x30beb4: 0x8ecb0040  lw          $t3, 0x40($s6)
    ctx->pc = 0x30beb4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x30beb8: 0xac4b0010  sw          $t3, 0x10($v0)
    ctx->pc = 0x30beb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 11));
    // 0x30bebc: 0xa4400014  sh          $zero, 0x14($v0)
    ctx->pc = 0x30bebcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x30bec0: 0xa4400016  sh          $zero, 0x16($v0)
    ctx->pc = 0x30bec0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x30bec4: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x30bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x30bec8: 0x8c4b0004  lw          $t3, 0x4($v0)
    ctx->pc = 0x30bec8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30becc: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x30beccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x30bed0: 0xac4a0004  sw          $t2, 0x4($v0)
    ctx->pc = 0x30bed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 10));
    // 0x30bed4: 0xa049000f  sb          $t1, 0xF($v0)
    ctx->pc = 0x30bed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 9));
    // 0x30bed8: 0xac470020  sw          $a3, 0x20($v0)
    ctx->pc = 0x30bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 7));
    // 0x30bedc: 0xac520024  sw          $s2, 0x24($v0)
    ctx->pc = 0x30bedcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 18));
    // 0x30bee0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BEE0u;
    {
        const bool branch_taken_0x30bee0 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x30BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEE0u;
        // 0x30bee4: 0xac460028  sw          $a2, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bee0) {
            ctx->pc = 0x30BEF0u;
            goto label_30bef0;
        }
    }
    ctx->pc = 0x30BEE8u;
    // 0x30bee8: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x30bee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30beec: 0x64043  sra         $t0, $a2, 1
    ctx->pc = 0x30beecu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 1));
label_30bef0:
    // 0x30bef0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x30bef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30bef4: 0x43843  sra         $a3, $a0, 1
    ctx->pc = 0x30bef4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 1));
    // 0x30bef8: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x30bef8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x30befc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x30befcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x30bf00: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x30bf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x30bf04: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BF04u;
    {
        const bool branch_taken_0x30bf04 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x30BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF04u;
        // 0x30bf08: 0x30c8ffff  andi        $t0, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf04) {
            ctx->pc = 0x30BF14u;
            goto label_30bf14;
        }
    }
    ctx->pc = 0x30BF0Cu;
    // 0x30bf0c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30bf10: 0x43843  sra         $a3, $a0, 1
    ctx->pc = 0x30bf10u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 1));
label_30bf14:
    // 0x30bf14: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x30bf14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x30bf18: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x30bf18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bf1c: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x30bf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x30bf20: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x30bf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x30bf24: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x30bf24u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x30bf28: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x30bf28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30bf2c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x30bf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x30bf30: 0x43c00  sll         $a3, $a0, 16
    ctx->pc = 0x30bf30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x30bf34: 0x24a90008  addiu       $t1, $a1, 0x8
    ctx->pc = 0x30bf34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x30bf38: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x30bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x30bf3c: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x30bf3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x30bf40: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x30bf40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x30bf44: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x30bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x30bf48: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x30bf48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x30bf4c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x30bf4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x30bf50: 0xac480018  sw          $t0, 0x18($v0)
    ctx->pc = 0x30bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 8));
    // 0x30bf54: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x30bf54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x30bf58: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x30bf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x30bf5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30bf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bf60: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x30BF60u;
    SET_GPR_U32(ctx, 31, 0x30BF68u);
    ctx->pc = 0x30BF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BF60u;
    // 0x30bf64: 0xac43001c  sw          $v1, 0x1C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x30BF60u, 0x30BF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BF68u;
label_30bf68:
    // 0x30bf68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bf6c: 0x0  nop
    ctx->pc = 0x30bf6cu;
    // NOP
label_30bf70:
    // 0x30bf70: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x30bf70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30bf74: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x30bf74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30bf78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x30bf78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30bf7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30bf7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30bf80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30bf80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30bf84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30bf84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30bf88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30bf88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30bf8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30bf8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30bf90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30bf90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bf94: 0x3e00008  jr          $ra
    ctx->pc = 0x30BF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF94u;
        // 0x30bf98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BF9Cu;
}
