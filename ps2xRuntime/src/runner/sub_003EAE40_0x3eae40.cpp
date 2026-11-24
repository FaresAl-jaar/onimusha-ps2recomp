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

// Function: sub_003EAE40
// Address: 0x3eae40 - 0x3eb150
void sub_003EAE40_0x3eae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EAE40_0x3eae40");
#endif

    switch (ctx->pc) {
        case 0x3eaea8u: goto label_3eaea8;
        case 0x3eaef0u: goto label_3eaef0;
        case 0x3eaf00u: goto label_3eaf00;
        case 0x3eaf0cu: goto label_3eaf0c;
        case 0x3eaf1cu: goto label_3eaf1c;
        case 0x3eb000u: goto label_3eb000;
        case 0x3eb084u: goto label_3eb084;
        case 0x3eb094u: goto label_3eb094;
        case 0x3eb0b0u: goto label_3eb0b0;
        default: break;
    }

    ctx->pc = 0x3eae40u;

    // 0x3eae40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3eae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3eae44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3eae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3eae48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3eae48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3eae4c: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3eae4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3eae50: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x3eae50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3eae54: 0x102000ba  beqz        $at, . + 4 + (0xBA << 2)
    ctx->pc = 0x3EAE54u;
    {
        const bool branch_taken_0x3eae54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAE54u;
        // 0x3eae58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eae54) {
            ctx->pc = 0x3EB140u;
            goto label_3eb140;
        }
    }
    ctx->pc = 0x3EAE5Cu;
    // 0x3eae5c: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3eae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3eae60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3eae60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3eae64: 0x24a54e00  addiu       $a1, $a1, 0x4E00
    ctx->pc = 0x3eae64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19968));
    // 0x3eae68: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3eae68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3eae6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3eae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eae70: 0x600008  jr          $v1
    ctx->pc = 0x3EAE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3EAE78u: goto label_3eae78;
            case 0x3EAEA8u: goto label_3eaea8;
            case 0x3EAEE0u: goto label_3eaee0;
            case 0x3EAEE8u: goto label_3eaee8;
            case 0x3EAF80u: goto label_3eaf80;
            case 0x3EB0B0u: goto label_3eb0b0;
            case 0x3EB128u: goto label_3eb128;
            case 0x3EB130u: goto label_3eb130;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAE70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3EAE78u;
label_3eae78:
    // 0x3eae78: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3eae78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eae7c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3eae7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eae80: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x3eae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x3eae84: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x3eae84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x3eae88: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3eae88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eae8c: 0xa20207f5  sb          $v0, 0x7F5($s0)
    ctx->pc = 0x3eae8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eae90: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3eae90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3eae94: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x3eae94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3eae98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eae98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3eae9c: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3eae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3eaea0: 0xc0fa52c  jal         func_3E94B0
    ctx->pc = 0x3EAEA0u;
    SET_GPR_U32(ctx, 31, 0x3EAEA8u);
    ctx->pc = 0x3EAEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAEA0u;
    // 0x3eaea4: 0xa2020821  sb          $v0, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E94B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E94B0u, 0x3EAEA0u, 0x3EAEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAEA8u;
label_3eaea8:
    // 0x3eaea8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3eaea8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3eaeac: 0x106000a4  beqz        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x3EAEACu;
    {
        const bool branch_taken_0x3eaeac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAEACu;
        // 0x3eaeb0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaeac) {
            ctx->pc = 0x3EB140u;
            goto label_3eb140;
        }
    }
    ctx->pc = 0x3EAEB4u;
    // 0x3eaeb4: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x3eaeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x3eaeb8: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3eaeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eaebc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3eaebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eaec0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3eaec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eaec4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eaec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eaec8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3eaec8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eaecc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3eaeccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3eaed0: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x3eaed0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3eaed4: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3eaed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3eaed8: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x3EAED8u;
    {
        const bool branch_taken_0x3eaed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAED8u;
        // 0x3eaedc: 0xae0307ec  sw          $v1, 0x7EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaed8) {
            ctx->pc = 0x3EB140u;
            goto label_3eb140;
        }
    }
    ctx->pc = 0x3EAEE0u;
label_3eaee0:
    // 0x3eaee0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3eaee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3eaee4: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3eaee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
label_3eaee8:
    // 0x3eaee8: 0xc0fb6b0  jal         func_3EDAC0
    ctx->pc = 0x3EAEE8u;
    SET_GPR_U32(ctx, 31, 0x3EAEF0u);
    ctx->pc = 0x3EDAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDAC0u, 0x3EAEE8u, 0x3EAEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAEF0u;
label_3eaef0:
    // 0x3eaef0: 0x14400093  bnez        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x3EAEF0u;
    {
        const bool branch_taken_0x3eaef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EAEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAEF0u;
        // 0x3eaef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaef0) {
            ctx->pc = 0x3EB140u;
            goto label_3eb140;
        }
    }
    ctx->pc = 0x3EAEF8u;
    // 0x3eaef8: 0xc0fa334  jal         func_3E8CD0
    ctx->pc = 0x3EAEF8u;
    SET_GPR_U32(ctx, 31, 0x3EAF00u);
    ctx->pc = 0x3E8CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8CD0u, 0x3EAEF8u, 0x3EAF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAF00u;
label_3eaf00:
    // 0x3eaf00: 0xa6022b20  sh          $v0, 0x2B20($s0)
    ctx->pc = 0x3eaf00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11040), (uint16_t)GPR_U32(ctx, 2));
    // 0x3eaf04: 0xc0fa34c  jal         func_3E8D30
    ctx->pc = 0x3EAF04u;
    SET_GPR_U32(ctx, 31, 0x3EAF0Cu);
    ctx->pc = 0x3EAF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAF04u;
    // 0x3eaf08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8D30u, 0x3EAF04u, 0x3EAF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAF0Cu;
label_3eaf0c:
    // 0x3eaf0c: 0x86052b20  lh          $a1, 0x2B20($s0)
    ctx->pc = 0x3eaf0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3eaf10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eaf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eaf14: 0xc0fa50c  jal         func_3E9430
    ctx->pc = 0x3EAF14u;
    SET_GPR_U32(ctx, 31, 0x3EAF1Cu);
    ctx->pc = 0x3EAF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAF14u;
    // 0x3eaf18: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9430u, 0x3EAF14u, 0x3EAF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAF1Cu;
label_3eaf1c:
    // 0x3eaf1c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3eaf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3eaf20: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3eaf20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3eaf24: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x3eaf24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3eaf28: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x3eaf28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3eaf2c: 0x34640dcd  ori         $a0, $v1, 0xDCD
    ctx->pc = 0x3eaf2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x3eaf30: 0x3c03457f  lui         $v1, 0x457F
    ctx->pc = 0x3eaf30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17791 << 16));
    // 0x3eaf34: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3eaf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3eaf38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3eaf38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eaf3c: 0xa41818  mult        $v1, $a1, $a0
    ctx->pc = 0x3eaf3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3eaf40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3eaf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3eaf44: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x3eaf44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x3eaf48: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3eaf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3eaf4c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x3eaf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x3eaf50: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3eaf50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3eaf54: 0xa6032b3a  sh          $v1, 0x2B3A($s0)
    ctx->pc = 0x3eaf54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11066), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eaf58: 0x86032b20  lh          $v1, 0x2B20($s0)
    ctx->pc = 0x3eaf58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3eaf5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3eaf5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eaf60: 0x0  nop
    ctx->pc = 0x3eaf60u;
    // NOP
    // 0x3eaf64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3eaf64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3eaf68: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3eaf68u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3eaf6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eaf6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3eaf70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3eaf70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3eaf74: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3EAF74u;
    {
        const bool branch_taken_0x3eaf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAF74u;
        // 0x3eaf78: 0xa6032b3c  sh          $v1, 0x2B3C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11068), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaf74) {
            ctx->pc = 0x3EB140u;
            goto label_3eb140;
        }
    }
    ctx->pc = 0x3EAF7Cu;
    // 0x3eaf7c: 0x0  nop
    ctx->pc = 0x3eaf7cu;
    // NOP
label_3eaf80:
    // 0x3eaf80: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3eaf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3eaf84: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3eaf84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eaf88: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3eaf88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3eaf8c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3eaf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eaf90: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3eaf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3eaf94: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3eaf94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3eaf98: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3eaf98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3eaf9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3eaf9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eafa0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3eafa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3eafa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3eafa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eafa8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3eafa8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eafac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eafacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eafb0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3eafb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eafb4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EAFB4u;
    {
        const bool branch_taken_0x3eafb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3eafb4) {
            ctx->pc = 0x3EAFCCu;
            goto label_3eafcc;
        }
    }
    ctx->pc = 0x3EAFBCu;
    // 0x3eafbc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eafbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eafc0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3eafc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3eafc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EAFC4u;
    {
        const bool branch_taken_0x3eafc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAFC4u;
        // 0x3eafc8: 0xa6032b22  sh          $v1, 0x2B22($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eafc4) {
            ctx->pc = 0x3EAFE8u;
            goto label_3eafe8;
        }
    }
    ctx->pc = 0x3EAFCCu;
label_3eafcc:
    // 0x3eafcc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3eafccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3eafd0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3eafd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3eafd4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eafd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eafd8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3eafd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3eafdc: 0x0  nop
    ctx->pc = 0x3eafdcu;
    // NOP
    // 0x3eafe0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3eafe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3eafe4: 0xa6032b22  sh          $v1, 0x2B22($s0)
    ctx->pc = 0x3eafe4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 3));
label_3eafe8:
    // 0x3eafe8: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3eafe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3eafec: 0x782249e0  lq          $v0, 0x49E0($at)
    ctx->pc = 0x3eafecu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x6849E0u));
    // 0x3eaff0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3eaff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x3eaff4: 0x86052b3a  lh          $a1, 0x2B3A($s0)
    ctx->pc = 0x3eaff4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11066)));
    // 0x3eaff8: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3EAFF8u;
    SET_GPR_U32(ctx, 31, 0x3EB000u);
    ctx->pc = 0x3EAFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAFF8u;
    // 0x3eaffc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3EAFF8u, 0x3EB000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB000u;
label_3eb000:
    // 0x3eb000: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3eb000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3eb004: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3eb004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3eb008: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3eb008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3eb00c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3eb00cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3eb010: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3eb010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3eb014: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3eb014u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3eb018: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3eb018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3eb01c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3eb01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3eb020: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EB020u;
    {
        const bool branch_taken_0x3eb020 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3EB024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB020u;
        // 0x3eb024: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb020) {
            ctx->pc = 0x3EB034u;
            goto label_3eb034;
        }
    }
    ctx->pc = 0x3EB028u;
    // 0x3eb028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3eb028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eb02c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EB02Cu;
    {
        const bool branch_taken_0x3eb02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB02Cu;
        // 0x3eb030: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb02c) {
            ctx->pc = 0x3EB04Cu;
            goto label_3eb04c;
        }
    }
    ctx->pc = 0x3EB034u;
label_3eb034:
    // 0x3eb034: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3eb034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3eb038: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3eb038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3eb03c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3eb03cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eb040: 0x0  nop
    ctx->pc = 0x3eb040u;
    // NOP
    // 0x3eb044: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3eb044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3eb048: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3eb048u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3eb04c:
    // 0x3eb04c: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x3eb04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
    // 0x3eb050: 0x3c024292  lui         $v0, 0x4292
    ctx->pc = 0x3eb050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17042 << 16));
    // 0x3eb054: 0x34640008  ori         $a0, $v1, 0x8
    ctx->pc = 0x3eb054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x3eb058: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3eb058u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eb05c: 0x3443aaaa  ori         $v1, $v0, 0xAAAA
    ctx->pc = 0x3eb05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43690);
    // 0x3eb060: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3eb060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eb064: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3eb064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3eb068: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eb068u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eb06c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eb06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3eb070: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3eb070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb074: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3eb074u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3eb078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3eb078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eb07c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3EB07Cu;
    SET_GPR_U32(ctx, 31, 0x3EB084u);
    ctx->pc = 0x3EB080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB07Cu;
    // 0x3eb080: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3EB07Cu, 0x3EB084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB084u;
label_3eb084:
    // 0x3eb084: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3eb084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3eb088: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3eb088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3eb08c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3EB08Cu;
    SET_GPR_U32(ctx, 31, 0x3EB094u);
    ctx->pc = 0x3EB090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB08Cu;
    // 0x3eb090: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3EB08Cu, 0x3EB094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB094u;
label_3eb094:
    // 0x3eb094: 0x86032b3a  lh          $v1, 0x2B3A($s0)
    ctx->pc = 0x3eb094u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11066)));
    // 0x3eb098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eb098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eb09c: 0x86022b3c  lh          $v0, 0x2B3C($s0)
    ctx->pc = 0x3eb09cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11068)));
    // 0x3eb0a0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3eb0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3eb0a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3eb0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3eb0a8: 0xc0fa530  jal         func_3E94C0
    ctx->pc = 0x3EB0A8u;
    SET_GPR_U32(ctx, 31, 0x3EB0B0u);
    ctx->pc = 0x3EB0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB0A8u;
    // 0x3eb0ac: 0xa6022b3a  sh          $v0, 0x2B3A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11066), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E94C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E94C0u, 0x3EB0A8u, 0x3EB0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB0B0u;
label_3eb0b0:
    // 0x3eb0b0: 0x86032b22  lh          $v1, 0x2B22($s0)
    ctx->pc = 0x3eb0b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x3eb0b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EB0B4u;
    {
        const bool branch_taken_0x3eb0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb0b4) {
            ctx->pc = 0x3EB0C8u;
            goto label_3eb0c8;
        }
    }
    ctx->pc = 0x3EB0BCu;
    // 0x3eb0bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eb0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3eb0c0: 0xa6032b22  sh          $v1, 0x2B22($s0)
    ctx->pc = 0x3eb0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eb0c4: 0x0  nop
    ctx->pc = 0x3eb0c4u;
    // NOP
label_3eb0c8:
    // 0x3eb0c8: 0x86032b22  lh          $v1, 0x2B22($s0)
    ctx->pc = 0x3eb0c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x3eb0cc: 0x1c60001c  bgtz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3EB0CCu;
    {
        const bool branch_taken_0x3eb0cc = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3eb0cc) {
            ctx->pc = 0x3EB140u;
            goto label_3eb140;
        }
    }
    ctx->pc = 0x3EB0D4u;
    // 0x3eb0d4: 0x86032b20  lh          $v1, 0x2B20($s0)
    ctx->pc = 0x3eb0d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3eb0d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eb0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3eb0dc: 0xa6032b20  sh          $v1, 0x2B20($s0)
    ctx->pc = 0x3eb0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11040), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eb0e0: 0x86032b20  lh          $v1, 0x2B20($s0)
    ctx->pc = 0x3eb0e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3eb0e4: 0x1c60000c  bgtz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3EB0E4u;
    {
        const bool branch_taken_0x3eb0e4 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3EB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB0E4u;
        // 0x3eb0e8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb0e4) {
            ctx->pc = 0x3EB118u;
            goto label_3eb118;
        }
    }
    ctx->pc = 0x3EB0ECu;
    // 0x3eb0ec: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x3eb0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x3eb0f0: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3eb0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eb0f4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3eb0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eb0f8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3eb0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb0fc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eb0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eb100: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3eb100u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eb104: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3eb104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3eb108: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x3eb108u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3eb10c: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3eb10cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3eb110: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3EB110u;
    {
        const bool branch_taken_0x3eb110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB110u;
        // 0x3eb114: 0xae0307ec  sw          $v1, 0x7EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb110) {
            ctx->pc = 0x3EB140u;
            goto label_3eb140;
        }
    }
    ctx->pc = 0x3EB118u;
label_3eb118:
    // 0x3eb118: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3eb118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3eb11c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EB11Cu;
    {
        const bool branch_taken_0x3eb11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB11Cu;
        // 0x3eb120: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb11c) {
            ctx->pc = 0x3EB140u;
            goto label_3eb140;
        }
    }
    ctx->pc = 0x3EB124u;
    // 0x3eb124: 0x0  nop
    ctx->pc = 0x3eb124u;
    // NOP
label_3eb128:
    // 0x3eb128: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3eb128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3eb12c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3eb12cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3eb130:
    // 0x3eb130: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3eb130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3eb134: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EB134u;
    {
        const bool branch_taken_0x3eb134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB134u;
        // 0x3eb138: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb134) {
            ctx->pc = 0x3EB140u;
            goto label_3eb140;
        }
    }
    ctx->pc = 0x3EB13Cu;
    // 0x3eb13c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3eb13cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3eb140:
    // 0x3eb140: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3eb140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eb144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3eb144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eb148: 0x3e00008  jr          $ra
    ctx->pc = 0x3EB148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB148u;
        // 0x3eb14c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EB150u;
}
