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

// Function: sub_003AAD40
// Address: 0x3aad40 - 0x3aaf8c
void sub_003AAD40_0x3aad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAD40_0x3aad40");
#endif

    switch (ctx->pc) {
        case 0x3aadb4u: goto label_3aadb4;
        case 0x3aadccu: goto label_3aadcc;
        case 0x3aaddcu: goto label_3aaddc;
        case 0x3aae24u: goto label_3aae24;
        case 0x3aae34u: goto label_3aae34;
        case 0x3aae7cu: goto label_3aae7c;
        case 0x3aae8cu: goto label_3aae8c;
        case 0x3aaebcu: goto label_3aaebc;
        case 0x3aaeccu: goto label_3aaecc;
        case 0x3aaef4u: goto label_3aaef4;
        case 0x3aaf3cu: goto label_3aaf3c;
        default: break;
    }

    ctx->pc = 0x3aad40u;

    // 0x3aad40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3aad40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3aad44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3aad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3aad48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3aad48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3aad4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3aad4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3aad50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3aad50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3aad54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aad54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aad58: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x3aad58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3aad5c: 0x10820052  beq         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x3AAD5Cu;
    {
        const bool branch_taken_0x3aad5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AAD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD5Cu;
        // 0x3aad60: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aad5c) {
            ctx->pc = 0x3AAEA8u;
            goto label_3aaea8;
        }
    }
    ctx->pc = 0x3AAD64u;
    // 0x3aad64: 0x10820040  beq         $a0, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x3AAD64u;
    {
        const bool branch_taken_0x3aad64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3aad64) {
            ctx->pc = 0x3AAE68u;
            goto label_3aae68;
        }
    }
    ctx->pc = 0x3AAD6Cu;
    // 0x3aad6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3aad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3aad70: 0x10820027  beq         $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3AAD70u;
    {
        const bool branch_taken_0x3aad70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AAD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD70u;
        // 0x3aad74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aad70) {
            ctx->pc = 0x3AAE10u;
            goto label_3aae10;
        }
    }
    ctx->pc = 0x3AAD78u;
    // 0x3aad78: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3AAD78u;
    {
        const bool branch_taken_0x3aad78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3aad78) {
            ctx->pc = 0x3AADB8u;
            goto label_3aadb8;
        }
    }
    ctx->pc = 0x3AAD80u;
    // 0x3aad80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AAD80u;
    {
        const bool branch_taken_0x3aad80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aad80) {
            ctx->pc = 0x3AAD90u;
            goto label_3aad90;
        }
    }
    ctx->pc = 0x3AAD88u;
    // 0x3aad88: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x3AAD88u;
    {
        const bool branch_taken_0x3aad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aad88) {
            ctx->pc = 0x3AAF70u;
            goto label_3aaf70;
        }
    }
    ctx->pc = 0x3AAD90u;
label_3aad90:
    // 0x3aad90: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3aad90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3aad94: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aad94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aad98: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3aad98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3aad9c: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x3aad9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aada0: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aada0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aada4: 0x24848c30  addiu       $a0, $a0, -0x73D0
    ctx->pc = 0x3aada4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937648));
    // 0x3aada8: 0xa4238c12  sh          $v1, -0x73EE($at)
    ctx->pc = 0x3aada8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B8C12u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6B8C12u, _value); } while (0);
    // 0x3aadac: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x3AADACu;
    SET_GPR_U32(ctx, 31, 0x3AADB4u);
    ctx->pc = 0x3AADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AADACu;
    // 0x3aadb0: 0x24a52930  addiu       $a1, $a1, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x3AADACu, 0x3AADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AADB4u;
label_3aadb4:
    // 0x3aadb4: 0x0  nop
    ctx->pc = 0x3aadb4u;
    // NOP
label_3aadb8:
    // 0x3aadb8: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3aadb8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3aadbc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aadbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aadc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aadc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aadc4: 0xc052840  jal         func_14A100
    ctx->pc = 0x3AADC4u;
    SET_GPR_U32(ctx, 31, 0x3AADCCu);
    ctx->pc = 0x3AADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AADC4u;
    // 0x3aadc8: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A100u, 0x3AADC4u, 0x3AADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AADCCu;
label_3aadcc:
    // 0x3aadcc: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x3AADCCu;
    {
        const bool branch_taken_0x3aadcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADCCu;
        // 0x3aadd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aadcc) {
            ctx->pc = 0x3AAF70u;
            goto label_3aaf70;
        }
    }
    ctx->pc = 0x3AADD4u;
    // 0x3aadd4: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AADD4u;
    SET_GPR_U32(ctx, 31, 0x3AADDCu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AADD4u, 0x3AADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AADDCu;
label_3aaddc:
    // 0x3aaddc: 0x4400064  bltz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x3AADDCu;
    {
        const bool branch_taken_0x3aaddc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3aaddc) {
            ctx->pc = 0x3AAF70u;
            goto label_3aaf70;
        }
    }
    ctx->pc = 0x3AADE4u;
    // 0x3aade4: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x3aade4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3aade8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3aade8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x3aadec: 0x3442b370  ori         $v0, $v0, 0xB370
    ctx->pc = 0x3aadecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45936);
    // 0x3aadf0: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aadf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aadf4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3aadf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3aadf8: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x3aadf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3aadfc: 0xac228c14  sw          $v0, -0x73EC($at)
    ctx->pc = 0x3aadfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B8C14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B8C14u, _value); } while (0);
    // 0x3aae00: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aae00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aae04: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3AAE04u;
    {
        const bool branch_taken_0x3aae04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE04u;
        // 0x3aae08: 0xac208c18  sw          $zero, -0x73E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aae04) {
            ctx->pc = 0x3AAF70u;
            goto label_3aaf70;
        }
    }
    ctx->pc = 0x3AAE0Cu;
    // 0x3aae0c: 0x0  nop
    ctx->pc = 0x3aae0cu;
    // NOP
label_3aae10:
    // 0x3aae10: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3aae10u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3aae14: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aae14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aae18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aae18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aae1c: 0xc052910  jal         func_14A440
    ctx->pc = 0x3AAE1Cu;
    SET_GPR_U32(ctx, 31, 0x3AAE24u);
    ctx->pc = 0x3AAE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAE1Cu;
    // 0x3aae20: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A440u, 0x3AAE1Cu, 0x3AAE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAE24u;
label_3aae24:
    // 0x3aae24: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x3AAE24u;
    {
        const bool branch_taken_0x3aae24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE24u;
        // 0x3aae28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aae24) {
            ctx->pc = 0x3AAF70u;
            goto label_3aaf70;
        }
    }
    ctx->pc = 0x3AAE2Cu;
    // 0x3aae2c: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AAE2Cu;
    SET_GPR_U32(ctx, 31, 0x3AAE34u);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AAE2Cu, 0x3AAE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAE34u;
label_3aae34:
    // 0x3aae34: 0x440004e  bltz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x3AAE34u;
    {
        const bool branch_taken_0x3aae34 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3aae34) {
            ctx->pc = 0x3AAF70u;
            goto label_3aaf70;
        }
    }
    ctx->pc = 0x3AAE3Cu;
    // 0x3aae3c: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x3aae3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3aae40: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3aae40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3aae44: 0x24639a70  addiu       $v1, $v1, -0x6590
    ctx->pc = 0x3aae44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941296));
    // 0x3aae48: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aae48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aae4c: 0x24020330  addiu       $v0, $zero, 0x330
    ctx->pc = 0x3aae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x3aae50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3aae50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3aae54: 0xa2040003  sb          $a0, 0x3($s0)
    ctx->pc = 0x3aae54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x3aae58: 0xac238c28  sw          $v1, -0x73D8($at)
    ctx->pc = 0x3aae58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B8C28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B8C28u, _value); } while (0);
    // 0x3aae5c: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aae5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aae60: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3AAE60u;
    {
        const bool branch_taken_0x3aae60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE60u;
        // 0x3aae64: 0xac228c2c  sw          $v0, -0x73D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aae60) {
            ctx->pc = 0x3AAF70u;
            goto label_3aaf70;
        }
    }
    ctx->pc = 0x3AAE68u;
label_3aae68:
    // 0x3aae68: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3aae68u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3aae6c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aae70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aae70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aae74: 0xc052970  jal         func_14A5C0
    ctx->pc = 0x3AAE74u;
    SET_GPR_U32(ctx, 31, 0x3AAE7Cu);
    ctx->pc = 0x3AAE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAE74u;
    // 0x3aae78: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A5C0u, 0x3AAE74u, 0x3AAE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAE7Cu;
label_3aae7c:
    // 0x3aae7c: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3AAE7Cu;
    {
        const bool branch_taken_0x3aae7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE7Cu;
        // 0x3aae80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aae7c) {
            ctx->pc = 0x3AAF70u;
            goto label_3aaf70;
        }
    }
    ctx->pc = 0x3AAE84u;
    // 0x3aae84: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AAE84u;
    SET_GPR_U32(ctx, 31, 0x3AAE8Cu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AAE84u, 0x3AAE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAE8Cu;
label_3aae8c:
    // 0x3aae8c: 0x4400038  bltz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3AAE8Cu;
    {
        const bool branch_taken_0x3aae8c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3aae8c) {
            ctx->pc = 0x3AAF70u;
            goto label_3aaf70;
        }
    }
    ctx->pc = 0x3AAE94u;
    // 0x3aae94: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x3aae94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3aae98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3aae98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3aae9c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3AAE9Cu;
    {
        const bool branch_taken_0x3aae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE9Cu;
        // 0x3aaea0: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aae9c) {
            ctx->pc = 0x3AAF70u;
            goto label_3aaf70;
        }
    }
    ctx->pc = 0x3AAEA4u;
    // 0x3aaea4: 0x0  nop
    ctx->pc = 0x3aaea4u;
    // NOP
label_3aaea8:
    // 0x3aaea8: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3aaea8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3aaeac: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aaeacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aaeb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aaeb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaeb4: 0xc0528b4  jal         func_14A2D0
    ctx->pc = 0x3AAEB4u;
    SET_GPR_U32(ctx, 31, 0x3AAEBCu);
    ctx->pc = 0x3AAEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAEB4u;
    // 0x3aaeb8: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2D0u, 0x3AAEB4u, 0x3AAEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAEBCu;
label_3aaebc:
    // 0x3aaebc: 0x1c40002c  bgtz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3AAEBCu;
    {
        const bool branch_taken_0x3aaebc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3AAEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAEBCu;
        // 0x3aaec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaebc) {
            ctx->pc = 0x3AAF70u;
            goto label_3aaf70;
        }
    }
    ctx->pc = 0x3AAEC4u;
    // 0x3aaec4: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AAEC4u;
    SET_GPR_U32(ctx, 31, 0x3AAECCu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AAEC4u, 0x3AAECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAECCu;
label_3aaecc:
    // 0x3aaecc: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3AAECCu;
    {
        const bool branch_taken_0x3aaecc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3aaecc) {
            ctx->pc = 0x3AAF70u;
            goto label_3aaf70;
        }
    }
    ctx->pc = 0x3AAED4u;
    // 0x3aaed4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3aaed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aaed8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3aaed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3aaedc: 0x8c319d98  lw          $s1, -0x6268($at)
    ctx->pc = 0x3aaedcu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x929D98u));
    // 0x3aaee0: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3aaee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3aaee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aaee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaee8: 0x24a59a70  addiu       $a1, $a1, -0x6590
    ctx->pc = 0x3aaee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941296));
    // 0x3aaeec: 0xc0eb0c4  jal         func_3AC310
    ctx->pc = 0x3AAEECu;
    SET_GPR_U32(ctx, 31, 0x3AAEF4u);
    ctx->pc = 0x3AAEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAEECu;
    // 0x3aaef0: 0x24060330  addiu       $a2, $zero, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC310u, 0x3AAEECu, 0x3AAEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAEF4u;
label_3aaef4:
    // 0x3aaef4: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AAEF4u;
    {
        const bool branch_taken_0x3aaef4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3aaef4) {
            ctx->pc = 0x3AAF20u;
            goto label_3aaf20;
        }
    }
    ctx->pc = 0x3AAEFCu;
    // 0x3aaefc: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3aaefcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aaf00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3aaf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aaf04: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3aaf04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aaf08: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3aaf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3aaf0c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3aaf0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aaf10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aaf10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaf14: 0xa204000a  sb          $a0, 0xA($s0)
    ctx->pc = 0x3aaf14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x3aaf18: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3AAF18u;
    {
        const bool branch_taken_0x3aaf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF18u;
        // 0x3aaf1c: 0xa6030014  sh          $v1, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf18) {
            ctx->pc = 0x3AAF78u;
            goto label_3aaf78;
        }
    }
    ctx->pc = 0x3AAF20u;
label_3aaf20:
    // 0x3aaf20: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3aaf20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3aaf24: 0x8c319d9c  lw          $s1, -0x6264($at)
    ctx->pc = 0x3aaf24u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x929D9Cu));
    // 0x3aaf28: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3aaf28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3aaf2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aaf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaf30: 0x24a59a70  addiu       $a1, $a1, -0x6590
    ctx->pc = 0x3aaf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941296));
    // 0x3aaf34: 0xc0eb0f4  jal         func_3AC3D0
    ctx->pc = 0x3AAF34u;
    SET_GPR_U32(ctx, 31, 0x3AAF3Cu);
    ctx->pc = 0x3AAF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAF34u;
    // 0x3aaf38: 0x24060330  addiu       $a2, $zero, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC3D0u, 0x3AAF34u, 0x3AAF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAF3Cu;
label_3aaf3c:
    // 0x3aaf3c: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AAF3Cu;
    {
        const bool branch_taken_0x3aaf3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3aaf3c) {
            ctx->pc = 0x3AAF68u;
            goto label_3aaf68;
        }
    }
    ctx->pc = 0x3AAF44u;
    // 0x3aaf44: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3aaf44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aaf48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3aaf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aaf4c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3aaf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aaf50: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3aaf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3aaf54: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3aaf54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aaf58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aaf58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaf5c: 0xa204000a  sb          $a0, 0xA($s0)
    ctx->pc = 0x3aaf5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x3aaf60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3AAF60u;
    {
        const bool branch_taken_0x3aaf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF60u;
        // 0x3aaf64: 0xa6030014  sh          $v1, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf60) {
            ctx->pc = 0x3AAF78u;
            goto label_3aaf78;
        }
    }
    ctx->pc = 0x3AAF68u;
label_3aaf68:
    // 0x3aaf68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AAF68u;
    {
        const bool branch_taken_0x3aaf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF68u;
        // 0x3aaf6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaf68) {
            ctx->pc = 0x3AAF78u;
            goto label_3aaf78;
        }
    }
    ctx->pc = 0x3AAF70u;
label_3aaf70:
    // 0x3aaf70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aaf70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaf74: 0x0  nop
    ctx->pc = 0x3aaf74u;
    // NOP
label_3aaf78:
    // 0x3aaf78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3aaf78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aaf7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3aaf7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aaf80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3aaf80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aaf84: 0x3e00008  jr          $ra
    ctx->pc = 0x3AAF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF84u;
        // 0x3aaf88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AAF8Cu;
}
