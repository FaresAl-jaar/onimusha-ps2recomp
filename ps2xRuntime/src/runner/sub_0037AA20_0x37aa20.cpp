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

// Function: sub_0037AA20
// Address: 0x37aa20 - 0x37ad80
void sub_0037AA20_0x37aa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037AA20_0x37aa20");
#endif

    switch (ctx->pc) {
        case 0x37aa3cu: goto label_37aa3c;
        case 0x37aa64u: goto label_37aa64;
        case 0x37ab48u: goto label_37ab48;
        case 0x37ab68u: goto label_37ab68;
        case 0x37ab88u: goto label_37ab88;
        case 0x37aba8u: goto label_37aba8;
        case 0x37abb8u: goto label_37abb8;
        case 0x37abc8u: goto label_37abc8;
        case 0x37ac10u: goto label_37ac10;
        case 0x37ac18u: goto label_37ac18;
        case 0x37ac28u: goto label_37ac28;
        case 0x37ac84u: goto label_37ac84;
        case 0x37aca8u: goto label_37aca8;
        case 0x37ad00u: goto label_37ad00;
        default: break;
    }

    ctx->pc = 0x37aa20u;

    // 0x37aa20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x37aa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x37aa24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37aa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37aa28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37aa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37aa2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37aa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37aa30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37aa30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aa34: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x37AA34u;
    SET_GPR_U32(ctx, 31, 0x37AA3Cu);
    ctx->pc = 0x37AA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AA34u;
    // 0x37aa38: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x37AA34u, 0x37AA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AA3Cu;
label_37aa3c:
    // 0x37aa3c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x37aa3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x37aa40: 0x24020371  addiu       $v0, $zero, 0x371
    ctx->pc = 0x37aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 881));
    // 0x37aa44: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x37aa44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x37aa48: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37AA48u;
    {
        const bool branch_taken_0x37aa48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x37aa48) {
            ctx->pc = 0x37AA58u;
            goto label_37aa58;
        }
    }
    ctx->pc = 0x37AA50u;
    // 0x37aa50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37AA50u;
    {
        const bool branch_taken_0x37aa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37aa50) {
            ctx->pc = 0x37AA68u;
            goto label_37aa68;
        }
    }
    ctx->pc = 0x37AA58u;
label_37aa58:
    // 0x37aa58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37aa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37aa5c: 0xc097904  jal         func_25E410
    ctx->pc = 0x37AA5Cu;
    SET_GPR_U32(ctx, 31, 0x37AA64u);
    ctx->pc = 0x37AA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AA5Cu;
    // 0x37aa60: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E410u, 0x37AA5Cu, 0x37AA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AA64u;
label_37aa64:
    // 0x37aa64: 0x0  nop
    ctx->pc = 0x37aa64u;
    // NOP
label_37aa68:
    // 0x37aa68: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x37aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x37aa6c: 0xa2422b8e  sb          $v0, 0x2B8E($s2)
    ctx->pc = 0x37aa6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11150), (uint8_t)GPR_U32(ctx, 2));
    // 0x37aa70: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x37aa70u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x37aa74: 0xa6402b90  sh          $zero, 0x2B90($s2)
    ctx->pc = 0x37aa74u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11152), (uint16_t)GPR_U32(ctx, 0));
    // 0x37aa78: 0x3c0c0066  lui         $t4, 0x66
    ctx->pc = 0x37aa78u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)102 << 16));
    // 0x37aa7c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x37aa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x37aa80: 0xa2402b92  sb          $zero, 0x2B92($s2)
    ctx->pc = 0x37aa80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11154), (uint8_t)GPR_U32(ctx, 0));
    // 0x37aa84: 0xa2440730  sb          $a0, 0x730($s2)
    ctx->pc = 0x37aa84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1840), (uint8_t)GPR_U32(ctx, 4));
    // 0x37aa88: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x37aa88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
    // 0x37aa8c: 0xae400700  sw          $zero, 0x700($s2)
    ctx->pc = 0x37aa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1792), GPR_U32(ctx, 0));
    // 0x37aa90: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x37aa90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
    // 0x37aa94: 0xae400704  sw          $zero, 0x704($s2)
    ctx->pc = 0x37aa94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1796), GPR_U32(ctx, 0));
    // 0x37aa98: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x37aa98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x37aa9c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x37aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x37aaa0: 0xae400708  sw          $zero, 0x708($s2)
    ctx->pc = 0x37aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1800), GPR_U32(ctx, 0));
    // 0x37aaa4: 0xae43070c  sw          $v1, 0x70C($s2)
    ctx->pc = 0x37aaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1804), GPR_U32(ctx, 3));
    // 0x37aaa8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x37aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x37aaac: 0xae4200e8  sw          $v0, 0xE8($s2)
    ctx->pc = 0x37aaacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 2));
    // 0x37aab0: 0x3c1844fa  lui         $t8, 0x44FA
    ctx->pc = 0x37aab0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)17658 << 16));
    // 0x37aab4: 0xae4206c0  sw          $v0, 0x6C0($s2)
    ctx->pc = 0x37aab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1728), GPR_U32(ctx, 2));
    // 0x37aab8: 0x2410ffdf  addiu       $s0, $zero, -0x21
    ctx->pc = 0x37aab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x37aabc: 0x8e51004c  lw          $s1, 0x4C($s2)
    ctx->pc = 0x37aabcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x37aac0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x37aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x37aac4: 0x25cead30  addiu       $t6, $t6, -0x52D0
    ctx->pc = 0x37aac4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946096));
    // 0x37aac8: 0x27af0090  addiu       $t7, $sp, 0x90
    ctx->pc = 0x37aac8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x37aacc: 0x258cad40  addiu       $t4, $t4, -0x52C0
    ctx->pc = 0x37aaccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294946112));
    // 0x37aad0: 0x27ad0080  addiu       $t5, $sp, 0x80
    ctx->pc = 0x37aad0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37aad4: 0x254aad50  addiu       $t2, $t2, -0x52B0
    ctx->pc = 0x37aad4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294946128));
    // 0x37aad8: 0x27ab0070  addiu       $t3, $sp, 0x70
    ctx->pc = 0x37aad8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37aadc: 0x2508ad60  addiu       $t0, $t0, -0x52A0
    ctx->pc = 0x37aadcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294946144));
    // 0x37aae0: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x37aae0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x37aae4: 0x24c6ad70  addiu       $a2, $a2, -0x5290
    ctx->pc = 0x37aae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946160));
    // 0x37aae8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x37aae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x37aaec: 0xae380084  sw          $t8, 0x84($s1)
    ctx->pc = 0x37aaecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 24));
    // 0x37aaf0: 0x2442ad80  addiu       $v0, $v0, -0x5280
    ctx->pc = 0x37aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946176));
    // 0x37aaf4: 0x8e58004c  lw          $t8, 0x4C($s2)
    ctx->pc = 0x37aaf4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x37aaf8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x37aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x37aafc: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x37aafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x37ab00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37ab00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ab04: 0x8f110000  lw          $s1, 0x0($t8)
    ctx->pc = 0x37ab04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x37ab08: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x37ab08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x37ab0c: 0xaf100000  sw          $s0, 0x0($t8)
    ctx->pc = 0x37ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 16));
    // 0x37ab10: 0xa2400162  sb          $zero, 0x162($s2)
    ctx->pc = 0x37ab10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 354), (uint8_t)GPR_U32(ctx, 0));
    // 0x37ab14: 0x79ce0000  lq          $t6, 0x0($t6)
    ctx->pc = 0x37ab14u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x37ab18: 0x7dee0000  sq          $t6, 0x0($t7)
    ctx->pc = 0x37ab18u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 14));
    // 0x37ab1c: 0x798c0000  lq          $t4, 0x0($t4)
    ctx->pc = 0x37ab1cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x37ab20: 0x7dac0000  sq          $t4, 0x0($t5)
    ctx->pc = 0x37ab20u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 12));
    // 0x37ab24: 0x794a0000  lq          $t2, 0x0($t2)
    ctx->pc = 0x37ab24u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x37ab28: 0x7d6a0000  sq          $t2, 0x0($t3)
    ctx->pc = 0x37ab28u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 10));
    // 0x37ab2c: 0x79080000  lq          $t0, 0x0($t0)
    ctx->pc = 0x37ab2cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x37ab30: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x37ab30u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
    // 0x37ab34: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x37ab34u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37ab38: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x37ab38u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x37ab3c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x37ab3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ab40: 0xc053b28  jal         func_14ECA0
    ctx->pc = 0x37AB40u;
    SET_GPR_U32(ctx, 31, 0x37AB48u);
    ctx->pc = 0x37AB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AB40u;
    // 0x37ab44: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECA0u, 0x37AB40u, 0x37AB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AB48u;
label_37ab48:
    // 0x37ab48: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x37ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x37ab4c: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x37ab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x37ab50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37ab50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ab54: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x37ab54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x37ab58: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x37ab58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37ab5c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x37ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x37ab60: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x37AB60u;
    SET_GPR_U32(ctx, 31, 0x37AB68u);
    ctx->pc = 0x37AB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AB60u;
    // 0x37ab64: 0x244706c0  addiu       $a3, $v0, 0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x37AB60u, 0x37AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AB68u;
label_37ab68:
    // 0x37ab68: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x37ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x37ab6c: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x37ab6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x37ab70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37ab70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ab74: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x37ab74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37ab78: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x37ab78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x37ab7c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x37ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x37ab80: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x37AB80u;
    SET_GPR_U32(ctx, 31, 0x37AB88u);
    ctx->pc = 0x37AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AB80u;
    // 0x37ab84: 0x244707c0  addiu       $a3, $v0, 0x7C0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x37AB80u, 0x37AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AB88u;
label_37ab88:
    // 0x37ab88: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x37ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x37ab8c: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x37ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x37ab90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37ab90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ab94: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x37ab94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x37ab98: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x37ab98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x37ab9c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x37ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x37aba0: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x37ABA0u;
    SET_GPR_U32(ctx, 31, 0x37ABA8u);
    ctx->pc = 0x37ABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ABA0u;
    // 0x37aba4: 0x24470800  addiu       $a3, $v0, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x37ABA0u, 0x37ABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ABA8u;
label_37aba8:
    // 0x37aba8: 0x87828388  lh          $v0, -0x7C78($gp)
    ctx->pc = 0x37aba8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x37abac: 0x27b000ac  addiu       $s0, $sp, 0xAC
    ctx->pc = 0x37abacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x37abb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37abb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37abb4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x37abb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_37abb8:
    // 0x37abb8: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x37abb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37abbc: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x37abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x37abc0: 0xc0a8540  jal         func_2A1500
    ctx->pc = 0x37ABC0u;
    SET_GPR_U32(ctx, 31, 0x37ABC8u);
    ctx->pc = 0x37ABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ABC0u;
    // 0x37abc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1500u, 0x37ABC0u, 0x37ABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ABC8u;
label_37abc8:
    // 0x37abc8: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x37abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x37abcc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x37abccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37abd0: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x37abd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37abd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37abd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37abd8: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x37abd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x37abdc: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x37abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x37abe0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x37abe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x37abe4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37abe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37abe8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x37abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x37abec: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x37abecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x37abf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37abf4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x37ABF4u;
    {
        const bool branch_taken_0x37abf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ABF4u;
        // 0x37abf8: 0xa066004a  sb          $a2, 0x4A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 74), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37abf4) {
            ctx->pc = 0x37ABB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37abb8;
        }
    }
    ctx->pc = 0x37ABFCu;
    // 0x37abfc: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x37abfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x37ac00: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x37ac00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x37ac04: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x37ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    // 0x37ac08: 0xc0692bc  jal         func_1A4AF0
    ctx->pc = 0x37AC08u;
    SET_GPR_U32(ctx, 31, 0x37AC10u);
    ctx->pc = 0x37AC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AC08u;
    // 0x37ac0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AF0u, 0x37AC08u, 0x37AC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AC10u;
label_37ac10:
    // 0x37ac10: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x37AC10u;
    {
        const bool branch_taken_0x37ac10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC10u;
        // 0x37ac14: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac10) {
            ctx->pc = 0x37AC90u;
            goto label_37ac90;
        }
    }
    ctx->pc = 0x37AC18u;
label_37ac18:
    // 0x37ac18: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x37ac18u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x37ac1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37ac1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ac20: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x37ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37ac24: 0x0  nop
    ctx->pc = 0x37ac24u;
    // NOP
label_37ac28:
    // 0x37ac28: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x37AC28u;
    {
        const bool branch_taken_0x37ac28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC28u;
        // 0x37ac2c: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac28) {
            ctx->pc = 0x37AC48u;
            goto label_37ac48;
        }
    }
    ctx->pc = 0x37AC30u;
    // 0x37ac30: 0x90630044  lbu         $v1, 0x44($v1)
    ctx->pc = 0x37ac30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x37ac34: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x37AC34u;
    {
        const bool branch_taken_0x37ac34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x37ac34) {
            ctx->pc = 0x37AC60u;
            goto label_37ac60;
        }
    }
    ctx->pc = 0x37AC3Cu;
    // 0x37ac3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37AC3Cu;
    {
        const bool branch_taken_0x37ac3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC3Cu;
        // 0x37ac40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac3c) {
            ctx->pc = 0x37AC60u;
            goto label_37ac60;
        }
    }
    ctx->pc = 0x37AC44u;
    // 0x37ac44: 0x0  nop
    ctx->pc = 0x37ac44u;
    // NOP
label_37ac48:
    // 0x37ac48: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x37ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x37ac4c: 0x90630044  lbu         $v1, 0x44($v1)
    ctx->pc = 0x37ac4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x37ac50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37AC50u;
    {
        const bool branch_taken_0x37ac50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ac50) {
            ctx->pc = 0x37AC60u;
            goto label_37ac60;
        }
    }
    ctx->pc = 0x37AC58u;
    // 0x37ac58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37ac58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ac5c: 0x0  nop
    ctx->pc = 0x37ac5cu;
    // NOP
label_37ac60:
    // 0x37ac60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x37ac60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x37ac64: 0x2ca3000a  sltiu       $v1, $a1, 0xA
    ctx->pc = 0x37ac64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x37ac68: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x37AC68u;
    {
        const bool branch_taken_0x37ac68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37ac68) {
            ctx->pc = 0x37AC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ac28;
        }
    }
    ctx->pc = 0x37AC70u;
    // 0x37ac70: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x37AC70u;
    {
        const bool branch_taken_0x37ac70 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC70u;
        // 0x37ac74: 0x3c040085  lui         $a0, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac70) {
            ctx->pc = 0x37AC90u;
            goto label_37ac90;
        }
    }
    ctx->pc = 0x37AC78u;
    // 0x37ac78: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x37ac78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x37ac7c: 0xc0692bc  jal         func_1A4AF0
    ctx->pc = 0x37AC7Cu;
    SET_GPR_U32(ctx, 31, 0x37AC84u);
    ctx->pc = 0x37AC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37AC7Cu;
    // 0x37ac80: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AF0u, 0x37AC7Cu, 0x37AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AC84u;
label_37ac84:
    // 0x37ac84: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x37AC84u;
    {
        const bool branch_taken_0x37ac84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC84u;
        // 0x37ac88: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac84) {
            ctx->pc = 0x37AC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ac18;
        }
    }
    ctx->pc = 0x37AC8Cu;
    // 0x37ac8c: 0x0  nop
    ctx->pc = 0x37ac8cu;
    // NOP
label_37ac90:
    // 0x37ac90: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x37AC90u;
    {
        const bool branch_taken_0x37ac90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AC90u;
        // 0x37ac94: 0x3c040085  lui         $a0, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ac90) {
            ctx->pc = 0x37ACB0u;
            goto label_37acb0;
        }
    }
    ctx->pc = 0x37AC98u;
    // 0x37ac98: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x37ac98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x37ac9c: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x37ac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    // 0x37aca0: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x37ACA0u;
    SET_GPR_U32(ctx, 31, 0x37ACA8u);
    ctx->pc = 0x37ACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ACA0u;
    // 0x37aca4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x37ACA0u, 0x37ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ACA8u;
label_37aca8:
    // 0x37aca8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x37aca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37acac: 0x0  nop
    ctx->pc = 0x37acacu;
    // NOP
label_37acb0:
    // 0x37acb0: 0x10c0002d  beqz        $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x37ACB0u;
    {
        const bool branch_taken_0x37acb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x37ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ACB0u;
        // 0x37acb4: 0x3c0328d9  lui         $v1, 0x28D9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37acb0) {
            ctx->pc = 0x37AD68u;
            goto label_37ad68;
        }
    }
    ctx->pc = 0x37ACB8u;
    // 0x37acb8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x37acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37acbc: 0x3465d9d9  ori         $a1, $v1, 0xD9D9
    ctx->pc = 0x37acbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55769);
    // 0x37acc0: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x37acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x37acc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37acc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37acc8: 0xacc4003c  sw          $a0, 0x3C($a2)
    ctx->pc = 0x37acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 4));
    // 0x37accc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37acccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37acd0: 0xacc30040  sw          $v1, 0x40($a2)
    ctx->pc = 0x37acd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 3));
    // 0x37acd4: 0x24040083  addiu       $a0, $zero, 0x83
    ctx->pc = 0x37acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x37acd8: 0xacc50034  sw          $a1, 0x34($a2)
    ctx->pc = 0x37acd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 5));
    // 0x37acdc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x37acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37ace0: 0xa0c00024  sb          $zero, 0x24($a2)
    ctx->pc = 0x37ace0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x37ace4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37ace4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ace8: 0xa0c40025  sb          $a0, 0x25($a2)
    ctx->pc = 0x37ace8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 37), (uint8_t)GPR_U32(ctx, 4));
    // 0x37acec: 0xa0c30026  sb          $v1, 0x26($a2)
    ctx->pc = 0x37acecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x37acf0: 0xa0c00014  sb          $zero, 0x14($a2)
    ctx->pc = 0x37acf0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x37acf4: 0xa0c00015  sb          $zero, 0x15($a2)
    ctx->pc = 0x37acf4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x37acf8: 0xa0c30016  sb          $v1, 0x16($a2)
    ctx->pc = 0x37acf8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 22), (uint8_t)GPR_U32(ctx, 3));
    // 0x37acfc: 0x0  nop
    ctx->pc = 0x37acfcu;
    // NOP
label_37ad00:
    // 0x37ad00: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x37ad00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x37ad04: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x37ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x37ad08: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x37ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x37ad0c: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x37ad0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x37ad10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x37ad10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37ad14: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x37ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x37ad18: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x37ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x37ad1c: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x37ad1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x37ad20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x37ad20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37ad24: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x37ad24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x37ad28: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x37ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x37ad2c: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x37ad2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x37ad30: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x37ad30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37ad34: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x37ad34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x37ad38: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x37ad38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x37ad3c: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x37ad3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x37ad40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x37ad40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37ad44: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x37ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x37ad48: 0x24a30005  addiu       $v1, $a1, 0x5
    ctx->pc = 0x37ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x37ad4c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x37ad4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37ad50: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x37ad50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x37ad54: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x37AD54u;
    {
        const bool branch_taken_0x37ad54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD54u;
        // 0x37ad58: 0xa0800044  sb          $zero, 0x44($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ad54) {
            ctx->pc = 0x37AD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ad00;
        }
    }
    ctx->pc = 0x37AD5Cu;
    // 0x37ad5c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x37ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37ad60: 0xa0c30044  sb          $v1, 0x44($a2)
    ctx->pc = 0x37ad60u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 68), (uint8_t)GPR_U32(ctx, 3));
    // 0x37ad64: 0x0  nop
    ctx->pc = 0x37ad64u;
    // NOP
label_37ad68:
    // 0x37ad68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37ad68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37ad6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37ad6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37ad70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37ad70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ad74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37ad74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ad78: 0x3e00008  jr          $ra
    ctx->pc = 0x37AD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AD78u;
        // 0x37ad7c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AD80u;
}
