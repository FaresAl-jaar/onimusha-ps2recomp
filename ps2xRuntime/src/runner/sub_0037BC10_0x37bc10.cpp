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

// Function: sub_0037BC10
// Address: 0x37bc10 - 0x37bdd4
void sub_0037BC10_0x37bc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037BC10_0x37bc10");
#endif

    switch (ctx->pc) {
        case 0x37bc78u: goto label_37bc78;
        case 0x37bd10u: goto label_37bd10;
        case 0x37bd20u: goto label_37bd20;
        case 0x37bd3cu: goto label_37bd3c;
        case 0x37bd80u: goto label_37bd80;
        case 0x37bd90u: goto label_37bd90;
        default: break;
    }

    ctx->pc = 0x37bc10u;

    // 0x37bc10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37bc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37bc14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bc18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37bc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x37bc1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37bc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37bc20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37bc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37bc24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37bc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37bc28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37bc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37bc2c: 0x8c8529c0  lw          $a1, 0x29C0($a0)
    ctx->pc = 0x37bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x37bc30: 0x90832b92  lbu         $v1, 0x2B92($a0)
    ctx->pc = 0x37bc30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11154)));
    // 0x37bc34: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x37bc34u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37bc38: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x37BC38u;
    {
        const bool branch_taken_0x37bc38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BC38u;
        // 0x37bc3c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bc38) {
            ctx->pc = 0x37BC70u;
            goto label_37bc70;
        }
    }
    ctx->pc = 0x37BC40u;
    // 0x37bc40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37BC40u;
    {
        const bool branch_taken_0x37bc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bc40) {
            ctx->pc = 0x37BC50u;
            goto label_37bc50;
        }
    }
    ctx->pc = 0x37BC48u;
    // 0x37bc48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37BC48u;
    {
        const bool branch_taken_0x37bc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bc48) {
            ctx->pc = 0x37BC70u;
            goto label_37bc70;
        }
    }
    ctx->pc = 0x37BC50u;
label_37bc50:
    // 0x37bc50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x37bc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x37bc54: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x37bc54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37bc58: 0x8e2206c8  lw          $v0, 0x6C8($s1)
    ctx->pc = 0x37bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x37bc5c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x37bc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x37bc60: 0xae2206c8  sw          $v0, 0x6C8($s1)
    ctx->pc = 0x37bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1736), GPR_U32(ctx, 2));
    // 0x37bc64: 0x8e2206cc  lw          $v0, 0x6CC($s1)
    ctx->pc = 0x37bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
    // 0x37bc68: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x37bc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x37bc6c: 0xae2206cc  sw          $v0, 0x6CC($s1)
    ctx->pc = 0x37bc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 2));
label_37bc70:
    // 0x37bc70: 0xc0a639c  jal         func_298E70
    ctx->pc = 0x37BC70u;
    SET_GPR_U32(ctx, 31, 0x37BC78u);
    ctx->pc = 0x37BC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BC70u;
    // 0x37bc74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298E70u, 0x37BC70u, 0x37BC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BC78u;
label_37bc78:
    // 0x37bc78: 0x8e25020c  lw          $a1, 0x20C($s1)
    ctx->pc = 0x37bc78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x37bc7c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x37bc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x37bc80: 0x96242b94  lhu         $a0, 0x2B94($s1)
    ctx->pc = 0x37bc80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11156)));
    // 0x37bc84: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x37bc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37bc88: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x37bc88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x37bc8c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x37BC8Cu;
    {
        const bool branch_taken_0x37bc8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BC8Cu;
        // 0x37bc90: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bc8c) {
            ctx->pc = 0x37BCA0u;
            goto label_37bca0;
        }
    }
    ctx->pc = 0x37BC94u;
    // 0x37bc94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x37BC94u;
    {
        const bool branch_taken_0x37bc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BC94u;
        // 0x37bc98: 0xa6232b94  sh          $v1, 0x2B94($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11156), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bc94) {
            ctx->pc = 0x37BCB0u;
            goto label_37bcb0;
        }
    }
    ctx->pc = 0x37BC9Cu;
    // 0x37bc9c: 0x0  nop
    ctx->pc = 0x37bc9cu;
    // NOP
label_37bca0:
    // 0x37bca0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x37bca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x37bca4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x37bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37bca8: 0xa6232b94  sh          $v1, 0x2B94($s1)
    ctx->pc = 0x37bca8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11156), (uint16_t)GPR_U32(ctx, 3));
    // 0x37bcac: 0x0  nop
    ctx->pc = 0x37bcacu;
    // NOP
label_37bcb0:
    // 0x37bcb0: 0x92242b92  lbu         $a0, 0x2B92($s1)
    ctx->pc = 0x37bcb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11154)));
    // 0x37bcb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bcb8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x37BCB8u;
    {
        const bool branch_taken_0x37bcb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37bcb8) {
            ctx->pc = 0x37BCE8u;
            goto label_37bce8;
        }
    }
    ctx->pc = 0x37BCC0u;
    // 0x37bcc0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37BCC0u;
    {
        const bool branch_taken_0x37bcc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bcc0) {
            ctx->pc = 0x37BCD0u;
            goto label_37bcd0;
        }
    }
    ctx->pc = 0x37BCC8u;
    // 0x37bcc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37BCC8u;
    {
        const bool branch_taken_0x37bcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bcc8) {
            ctx->pc = 0x37BCE8u;
            goto label_37bce8;
        }
    }
    ctx->pc = 0x37BCD0u;
label_37bcd0:
    // 0x37bcd0: 0x8e2429c0  lw          $a0, 0x29C0($s1)
    ctx->pc = 0x37bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x37bcd4: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x37bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x37bcd8: 0xa4900000  sh          $s0, 0x0($a0)
    ctx->pc = 0x37bcd8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x37bcdc: 0x8e2406cc  lw          $a0, 0x6CC($s1)
    ctx->pc = 0x37bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
    // 0x37bce0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x37bce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x37bce4: 0xae2306cc  sw          $v1, 0x6CC($s1)
    ctx->pc = 0x37bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 3));
label_37bce8:
    // 0x37bce8: 0x962529de  lhu         $a1, 0x29DE($s1)
    ctx->pc = 0x37bce8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10718)));
    // 0x37bcec: 0x962329e2  lhu         $v1, 0x29E2($s1)
    ctx->pc = 0x37bcecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10722)));
    // 0x37bcf0: 0x962429e0  lhu         $a0, 0x29E0($s1)
    ctx->pc = 0x37bcf0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10720)));
    // 0x37bcf4: 0xa02827  not         $a1, $a1
    ctx->pc = 0x37bcf4u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x37bcf8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x37bcf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x37bcfc: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x37bcfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x37bd00: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x37BD00u;
    {
        const bool branch_taken_0x37bd00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BD00u;
        // 0x37bd04: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bd00) {
            ctx->pc = 0x37BD70u;
            goto label_37bd70;
        }
    }
    ctx->pc = 0x37BD08u;
    // 0x37bd08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x37bd08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bd0c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x37bd0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37bd10:
    // 0x37bd10: 0x8e052b20  lw          $a1, 0x2B20($s0)
    ctx->pc = 0x37bd10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x37bd14: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x37bd14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x37bd18: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x37BD18u;
    SET_GPR_U32(ctx, 31, 0x37BD20u);
    ctx->pc = 0x37BD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BD18u;
    // 0x37bd1c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x37BD18u, 0x37BD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BD20u;
label_37bd20:
    // 0x37bd20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37bd20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bd24: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x37BD24u;
    {
        const bool branch_taken_0x37bd24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BD24u;
        // 0x37bd28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bd24) {
            ctx->pc = 0x37BD58u;
            goto label_37bd58;
        }
    }
    ctx->pc = 0x37BD2Cu;
    // 0x37bd2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37bd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37bd30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37bd30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bd34: 0xc0a5564  jal         func_295590
    ctx->pc = 0x37BD34u;
    SET_GPR_U32(ctx, 31, 0x37BD3Cu);
    ctx->pc = 0x37BD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BD34u;
    // 0x37bd38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295590u, 0x37BD34u, 0x37BD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BD3Cu;
label_37bd3c:
    // 0x37bd3c: 0x96240784  lhu         $a0, 0x784($s1)
    ctx->pc = 0x37bd3cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1924)));
    // 0x37bd40: 0x96430784  lhu         $v1, 0x784($s2)
    ctx->pc = 0x37bd40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1924)));
    // 0x37bd44: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x37bd44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x37bd48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x37BD48u;
    {
        const bool branch_taken_0x37bd48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bd48) {
            ctx->pc = 0x37BD58u;
            goto label_37bd58;
        }
    }
    ctx->pc = 0x37BD50u;
    // 0x37bd50: 0xa6440784  sh          $a0, 0x784($s2)
    ctx->pc = 0x37bd50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1924), (uint16_t)GPR_U32(ctx, 4));
    // 0x37bd54: 0x0  nop
    ctx->pc = 0x37bd54u;
    // NOP
label_37bd58:
    // 0x37bd58: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x37bd58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37bd5c: 0x2e630004  sltiu       $v1, $s3, 0x4
    ctx->pc = 0x37bd5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x37bd60: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x37BD60u;
    {
        const bool branch_taken_0x37bd60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BD60u;
        // 0x37bd64: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bd60) {
            ctx->pc = 0x37BD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37bd10;
        }
    }
    ctx->pc = 0x37BD68u;
    // 0x37bd68: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x37BD68u;
    {
        const bool branch_taken_0x37bd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bd68) {
            ctx->pc = 0x37BDB8u;
            goto label_37bdb8;
        }
    }
    ctx->pc = 0x37BD70u;
label_37bd70:
    // 0x37bd70: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x37bd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x37bd74: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x37bd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x37bd78: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x37BD78u;
    {
        const bool branch_taken_0x37bd78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BD78u;
        // 0x37bd7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bd78) {
            ctx->pc = 0x37BDB8u;
            goto label_37bdb8;
        }
    }
    ctx->pc = 0x37BD80u;
label_37bd80:
    // 0x37bd80: 0x8e252b20  lw          $a1, 0x2B20($s1)
    ctx->pc = 0x37bd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11040)));
    // 0x37bd84: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x37bd84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x37bd88: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x37BD88u;
    SET_GPR_U32(ctx, 31, 0x37BD90u);
    ctx->pc = 0x37BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BD88u;
    // 0x37bd8c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x37BD88u, 0x37BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BD90u;
label_37bd90:
    // 0x37bd90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37BD90u;
    {
        const bool branch_taken_0x37bd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bd90) {
            ctx->pc = 0x37BDA8u;
            goto label_37bda8;
        }
    }
    ctx->pc = 0x37BD98u;
    // 0x37bd98: 0x944329de  lhu         $v1, 0x29DE($v0)
    ctx->pc = 0x37bd98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10718)));
    // 0x37bd9c: 0x3063fffb  andi        $v1, $v1, 0xFFFB
    ctx->pc = 0x37bd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
    // 0x37bda0: 0xa44329de  sh          $v1, 0x29DE($v0)
    ctx->pc = 0x37bda0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x37bda4: 0x0  nop
    ctx->pc = 0x37bda4u;
    // NOP
label_37bda8:
    // 0x37bda8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37bda8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37bdac: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x37bdacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x37bdb0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x37BDB0u;
    {
        const bool branch_taken_0x37bdb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BDB0u;
        // 0x37bdb4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bdb0) {
            ctx->pc = 0x37BD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37bd80;
        }
    }
    ctx->pc = 0x37BDB8u;
label_37bdb8:
    // 0x37bdb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37bdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37bdbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37bdbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37bdc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37bdc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37bdc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37bdc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37bdc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37bdc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37bdcc: 0x3e00008  jr          $ra
    ctx->pc = 0x37BDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BDCCu;
        // 0x37bdd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37BDD4u;
}
