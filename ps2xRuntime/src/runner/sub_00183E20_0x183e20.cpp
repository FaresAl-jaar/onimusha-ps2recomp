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

// Function: sub_00183E20
// Address: 0x183e20 - 0x1841e8
void sub_00183E20_0x183e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183E20_0x183e20");
#endif

    switch (ctx->pc) {
        case 0x183e68u: goto label_183e68;
        case 0x183ebcu: goto label_183ebc;
        case 0x183f38u: goto label_183f38;
        case 0x183f5cu: goto label_183f5c;
        case 0x183f68u: goto label_183f68;
        case 0x183f78u: goto label_183f78;
        case 0x183fe8u: goto label_183fe8;
        case 0x184008u: goto label_184008;
        case 0x184014u: goto label_184014;
        case 0x18403cu: goto label_18403c;
        case 0x184048u: goto label_184048;
        case 0x184058u: goto label_184058;
        case 0x1840a4u: goto label_1840a4;
        case 0x184100u: goto label_184100;
        case 0x184110u: goto label_184110;
        case 0x18416cu: goto label_18416c;
        case 0x18417cu: goto label_18417c;
        default: break;
    }

    ctx->pc = 0x183e20u;

    // 0x183e20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x183e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x183e24: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x183e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x183e28: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x183e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x183e2c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x183e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x183e30: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x183e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x183e34: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x183e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x183e38: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x183e38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x183e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x183e40: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x183e40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x183e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x183e48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x183e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x183e4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x183e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e50: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x183e50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x183e54: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x183e54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x183e58: 0x8c960048  lw          $s6, 0x48($a0)
    ctx->pc = 0x183e58u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x183e5c: 0x8c920050  lw          $s2, 0x50($a0)
    ctx->pc = 0x183e5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x183e60: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x183E60u;
    {
        const bool branch_taken_0x183e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E60u;
        // 0x183e64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e60) {
            ctx->pc = 0x183F20u;
            goto label_183f20;
        }
    }
    ctx->pc = 0x183E68u;
label_183e68:
    // 0x183e68: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x183e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x183e6c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x183e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x183e70: 0x8e8201e0  lw          $v0, 0x1E0($s4)
    ctx->pc = 0x183e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 480)));
    // 0x183e74: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x183e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x183e78: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x183e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x183e7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x183e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x183e80: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x183e80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183e84: 0x8ea311d4  lw          $v1, 0x11D4($s5)
    ctx->pc = 0x183e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4564)));
    // 0x183e88: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x183e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x183e8c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x183E8Cu;
    {
        const bool branch_taken_0x183e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E8Cu;
        // 0x183e90: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e8c) {
            ctx->pc = 0x183F18u;
            goto label_183f18;
        }
    }
    ctx->pc = 0x183E94u;
    // 0x183e94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x183e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e98: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x183e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x183e9c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x183e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ea0: 0x278280b0  addiu       $v0, $gp, -0x7F50
    ctx->pc = 0x183ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934704));
    // 0x183ea4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x183ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x183ea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183eac: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x183eacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183eb0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x183eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183eb4: 0xc06107c  jal         func_1841F0
    ctx->pc = 0x183EB4u;
    SET_GPR_U32(ctx, 31, 0x183EBCu);
    ctx->pc = 0x183EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183EB4u;
    // 0x183eb8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1841F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1841F0u, 0x183EB4u, 0x183EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183EBCu;
label_183ebc:
    // 0x183ebc: 0xaea211d8  sw          $v0, 0x11D8($s5)
    ctx->pc = 0x183ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4568), GPR_U32(ctx, 2));
    // 0x183ec0: 0x278580b0  addiu       $a1, $gp, -0x7F50
    ctx->pc = 0x183ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934704));
    // 0x183ec4: 0x8ea211d4  lw          $v0, 0x11D4($s5)
    ctx->pc = 0x183ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4564)));
    // 0x183ec8: 0x928301fa  lbu         $v1, 0x1FA($s4)
    ctx->pc = 0x183ec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 506)));
    // 0x183ecc: 0x30440002  andi        $a0, $v0, 0x2
    ctx->pc = 0x183eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x183ed0: 0x43042  srl         $a2, $a0, 1
    ctx->pc = 0x183ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x183ed4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x183ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x183ed8: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x183ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x183edc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x183edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x183ee0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x183ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x183ee4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x183ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x183ee8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x183ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x183eec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x183eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183ef0: 0x244500d0  addiu       $a1, $v0, 0xD0
    ctx->pc = 0x183ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x183ef4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x183ef8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x183ef8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183efc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x183efcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x183f00: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x183f00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x183f04: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x183f04u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x183f08: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x183f08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x183f0c: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x183f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x183f10: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x183f10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x183f14: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x183f14u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
label_183f18:
    // 0x183f18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x183f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x183f1c: 0x0  nop
    ctx->pc = 0x183f1cu;
    // NOP
label_183f20:
    // 0x183f20: 0x928201f8  lbu         $v0, 0x1F8($s4)
    ctx->pc = 0x183f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 504)));
    // 0x183f24: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x183f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x183f28: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x183F28u;
    {
        const bool branch_taken_0x183f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F28u;
        // 0x183f2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f28) {
            ctx->pc = 0x183E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183e68;
        }
    }
    ctx->pc = 0x183F30u;
    // 0x183f30: 0xc060d40  jal         func_183500
    ctx->pc = 0x183F30u;
    SET_GPR_U32(ctx, 31, 0x183F38u);
    ctx->pc = 0x183F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183F30u;
    // 0x183f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x183F30u, 0x183F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F38u;
label_183f38:
    // 0x183f38: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x183f38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f3c: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x183F3Cu;
    {
        const bool branch_taken_0x183f3c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x183f3c) {
            ctx->pc = 0x183F50u;
            goto label_183f50;
        }
    }
    ctx->pc = 0x183F44u;
    // 0x183f44: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x183F44u;
    {
        const bool branch_taken_0x183f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F44u;
        // 0x183f48: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f44) {
            ctx->pc = 0x1841B8u;
            goto label_1841b8;
        }
    }
    ctx->pc = 0x183F4Cu;
    // 0x183f4c: 0x0  nop
    ctx->pc = 0x183f4cu;
    // NOP
label_183f50:
    // 0x183f50: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x183f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f54: 0xc061c08  jal         func_187020
    ctx->pc = 0x183F54u;
    SET_GPR_U32(ctx, 31, 0x183F5Cu);
    ctx->pc = 0x183F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183F54u;
    // 0x183f58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187020u, 0x183F54u, 0x183F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F5Cu;
label_183f5c:
    // 0x183f5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x183f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f60: 0xc060d40  jal         func_183500
    ctx->pc = 0x183F60u;
    SET_GPR_U32(ctx, 31, 0x183F68u);
    ctx->pc = 0x183F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183F60u;
    // 0x183f64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x183F60u, 0x183F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F68u;
label_183f68:
    // 0x183f68: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x183f68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x183f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f70: 0xc060d40  jal         func_183500
    ctx->pc = 0x183F70u;
    SET_GPR_U32(ctx, 31, 0x183F78u);
    ctx->pc = 0x183F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183F70u;
    // 0x183f74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183500u, 0x183F70u, 0x183F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F78u;
label_183f78:
    // 0x183f78: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x183F78u;
    {
        const bool branch_taken_0x183f78 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x183F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F78u;
        // 0x183f7c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f78) {
            ctx->pc = 0x183F88u;
            goto label_183f88;
        }
    }
    ctx->pc = 0x183F80u;
    // 0x183f80: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x183F80u;
    {
        const bool branch_taken_0x183f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F80u;
        // 0x183f84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f80) {
            ctx->pc = 0x1841B8u;
            goto label_1841b8;
        }
    }
    ctx->pc = 0x183F88u;
label_183f88:
    // 0x183f88: 0x8ea311d4  lw          $v1, 0x11D4($s5)
    ctx->pc = 0x183f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4564)));
    // 0x183f8c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x183f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x183f90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183F90u;
    {
        const bool branch_taken_0x183f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F90u;
        // 0x183f94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f90) {
            ctx->pc = 0x183FA0u;
            goto label_183fa0;
        }
    }
    ctx->pc = 0x183F98u;
    // 0x183f98: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x183F98u;
    {
        const bool branch_taken_0x183f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183f98) {
            ctx->pc = 0x1841B8u;
            goto label_1841b8;
        }
    }
    ctx->pc = 0x183FA0u;
label_183fa0:
    // 0x183fa0: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x183fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x183fa4: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x183FA4u;
    {
        const bool branch_taken_0x183fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FA4u;
        // 0x183fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fa4) {
            ctx->pc = 0x184198u;
            goto label_184198;
        }
    }
    ctx->pc = 0x183FACu;
    // 0x183fac: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x183facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x183fb0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x183fb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x183fb4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x183fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x183fb8: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x183FB8u;
    {
        const bool branch_taken_0x183fb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x183FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FB8u;
        // 0x183fbc: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fb8) {
            ctx->pc = 0x184058u;
            goto label_184058;
        }
    }
    ctx->pc = 0x183FC0u;
    // 0x183fc0: 0x8e2311d4  lw          $v1, 0x11D4($s1)
    ctx->pc = 0x183fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4564)));
    // 0x183fc4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x183fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x183fc8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x183FC8u;
    {
        const bool branch_taken_0x183fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FC8u;
        // 0x183fcc: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fc8) {
            ctx->pc = 0x184058u;
            goto label_184058;
        }
    }
    ctx->pc = 0x183FD0u;
    // 0x183fd0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x183FD0u;
    {
        const bool branch_taken_0x183fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183fd0) {
            ctx->pc = 0x183FF0u;
            goto label_183ff0;
        }
    }
    ctx->pc = 0x183FD8u;
    // 0x183fd8: 0xc63411f8  lwc1        $f20, 0x11F8($s1)
    ctx->pc = 0x183fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x183fdc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x183fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x183fe0: 0xc04171c  jal         func_105C70
    ctx->pc = 0x183FE0u;
    SET_GPR_U32(ctx, 31, 0x183FE8u);
    ctx->pc = 0x183FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183FE0u;
    // 0x183fe4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C70u, 0x183FE0u, 0x183FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183FE8u;
label_183fe8:
    // 0x183fe8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x183FE8u;
    {
        const bool branch_taken_0x183fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183fe8) {
            ctx->pc = 0x184058u;
            goto label_184058;
        }
    }
    ctx->pc = 0x183FF0u;
label_183ff0:
    // 0x183ff0: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x183ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x183ff4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x183FF4u;
    {
        const bool branch_taken_0x183ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183ff4) {
            ctx->pc = 0x184058u;
            goto label_184058;
        }
    }
    ctx->pc = 0x183FFCu;
    // 0x183ffc: 0xc63411f8  lwc1        $f20, 0x11F8($s1)
    ctx->pc = 0x183ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x184000: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x184000u;
    SET_GPR_U32(ctx, 31, 0x184008u);
    ctx->pc = 0x184004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184000u;
    // 0x184004: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x184000u, 0x184008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184008u;
label_184008:
    // 0x184008: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x184008u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x18400c: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x18400Cu;
    SET_GPR_U32(ctx, 31, 0x184014u);
    ctx->pc = 0x184010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18400Cu;
    // 0x184010: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x18400Cu, 0x184014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184014u;
label_184014:
    // 0x184014: 0x4600a01a  mula.s      $f20, $f0
    ctx->pc = 0x184014u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[20], ctx->f[0]));
    // 0x184018: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x184018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18401c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18401cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184020: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x184020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x184024: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x184024u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x184028: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x184028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18402c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x18402cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x184030: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x184030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x184034: 0xc04171c  jal         func_105C70
    ctx->pc = 0x184034u;
    SET_GPR_U32(ctx, 31, 0x18403Cu);
    ctx->pc = 0x184038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184034u;
    // 0x184038: 0x4615051c  madd.s      $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[21]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C70u, 0x184034u, 0x18403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18403Cu;
label_18403c:
    // 0x18403c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x18403cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x184040: 0xc041472  jal         func_1051C8
    ctx->pc = 0x184040u;
    SET_GPR_U32(ctx, 31, 0x184048u);
    ctx->pc = 0x184044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184040u;
    // 0x184044: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x184040u, 0x184048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184048u;
label_184048:
    // 0x184048: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x184048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18404c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18404cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x184050: 0xc0414dc  jal         func_105370
    ctx->pc = 0x184050u;
    SET_GPR_U32(ctx, 31, 0x184058u);
    ctx->pc = 0x184054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184050u;
    // 0x184054: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x184050u, 0x184058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184058u;
label_184058:
    // 0x184058: 0x8ea211d4  lw          $v0, 0x11D4($s5)
    ctx->pc = 0x184058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4564)));
    // 0x18405c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x18405cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x184060: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x184060u;
    {
        const bool branch_taken_0x184060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184060) {
            ctx->pc = 0x1840A8u;
            goto label_1840a8;
        }
    }
    ctx->pc = 0x184068u;
    // 0x184068: 0xc6a111f8  lwc1        $f1, 0x11F8($s5)
    ctx->pc = 0x184068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18406c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18406cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184070: 0x0  nop
    ctx->pc = 0x184070u;
    // NOP
    // 0x184074: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x184074u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184078: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x184078u;
    {
        const bool branch_taken_0x184078 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x184078) {
            ctx->pc = 0x1840A8u;
            goto label_1840a8;
        }
    }
    ctx->pc = 0x184080u;
    // 0x184080: 0xc6a011f4  lwc1        $f0, 0x11F4($s5)
    ctx->pc = 0x184080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184084: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x184084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x184088: 0x26a60030  addiu       $a2, $s5, 0x30
    ctx->pc = 0x184088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x18408c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18408cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184090: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x184090u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x184094: 0x0  nop
    ctx->pc = 0x184094u;
    // NOP
    // 0x184098: 0x0  nop
    ctx->pc = 0x184098u;
    // NOP
    // 0x18409c: 0xc04171c  jal         func_105C70
    ctx->pc = 0x18409Cu;
    SET_GPR_U32(ctx, 31, 0x1840A4u);
    ctx->pc = 0x1840A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18409Cu;
    // 0x1840a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C70u, 0x18409Cu, 0x1840A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1840A4u;
label_1840a4:
    // 0x1840a4: 0x0  nop
    ctx->pc = 0x1840a4u;
    // NOP
label_1840a8:
    // 0x1840a8: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x1840a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x1840ac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1840acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1840b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1840B0u;
    {
        const bool branch_taken_0x1840b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1840b0) {
            ctx->pc = 0x1840C0u;
            goto label_1840c0;
        }
    }
    ctx->pc = 0x1840B8u;
    // 0x1840b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1840b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1840bc: 0x0  nop
    ctx->pc = 0x1840bcu;
    // NOP
label_1840c0:
    // 0x1840c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1840c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1840c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1840c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1840c8: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1840c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1840cc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1840ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1840d0: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x1840d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1840d4: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1840D4u;
    {
        const bool branch_taken_0x1840d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1840D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840D4u;
        // 0x1840d8: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840d4) {
            ctx->pc = 0x1840F0u;
            goto label_1840f0;
        }
    }
    ctx->pc = 0x1840DCu;
    // 0x1840dc: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x1840dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1840e0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1840e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1840e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1840e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1840e8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1840e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1840ec: 0x0  nop
    ctx->pc = 0x1840ecu;
    // NOP
label_1840f0:
    // 0x1840f0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1840f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1840f4: 0x26c50010  addiu       $a1, $s6, 0x10
    ctx->pc = 0x1840f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1840f8: 0xc041442  jal         func_105108
    ctx->pc = 0x1840F8u;
    SET_GPR_U32(ctx, 31, 0x184100u);
    ctx->pc = 0x1840FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1840F8u;
    // 0x1840fc: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1840F8u, 0x184100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184100u;
label_184100:
    // 0x184100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x184100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184104: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x184104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x184108: 0xc0414ca  jal         func_105328
    ctx->pc = 0x184108u;
    SET_GPR_U32(ctx, 31, 0x184110u);
    ctx->pc = 0x18410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184108u;
    // 0x18410c: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x184108u, 0x184110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184110u;
label_184110:
    // 0x184110: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x184110u;
    {
        const bool branch_taken_0x184110 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x184110) {
            ctx->pc = 0x184180u;
            goto label_184180;
        }
    }
    ctx->pc = 0x184118u;
    // 0x184118: 0x8e830044  lw          $v1, 0x44($s4)
    ctx->pc = 0x184118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x18411c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x18411cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x184120: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x184120u;
    {
        const bool branch_taken_0x184120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184120u;
        // 0x184124: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x184120) {
            ctx->pc = 0x184180u;
            goto label_184180;
        }
    }
    ctx->pc = 0x184128u;
    // 0x184128: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x184128u;
    {
        const bool branch_taken_0x184128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184128) {
            ctx->pc = 0x184180u;
            goto label_184180;
        }
    }
    ctx->pc = 0x184130u;
    // 0x184130: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x184130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x184134: 0x26c50010  addiu       $a1, $s6, 0x10
    ctx->pc = 0x184134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x184138: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x184138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18413c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x18413cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x184140: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x184140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184144: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x184144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x184148: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x184148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18414c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x18414cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x184150: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x184150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x184154: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x184154u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x184158: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x184158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18415c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18415cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x184160: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x184160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x184164: 0xc041442  jal         func_105108
    ctx->pc = 0x184164u;
    SET_GPR_U32(ctx, 31, 0x18416Cu);
    ctx->pc = 0x184168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184164u;
    // 0x184168: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x184164u, 0x18416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18416Cu;
label_18416c:
    // 0x18416c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18416cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184170: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x184170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x184174: 0xc0414ca  jal         func_105328
    ctx->pc = 0x184174u;
    SET_GPR_U32(ctx, 31, 0x18417Cu);
    ctx->pc = 0x184178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184174u;
    // 0x184178: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x184174u, 0x18417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18417Cu;
label_18417c:
    // 0x18417c: 0x0  nop
    ctx->pc = 0x18417cu;
    // NOP
label_184180:
    // 0x184180: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x184180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184184: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x184184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x184188: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x184188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18418c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18418cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184190: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x184190u;
    {
        const bool branch_taken_0x184190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184190u;
        // 0x184194: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184190) {
            ctx->pc = 0x1841B0u;
            goto label_1841b0;
        }
    }
    ctx->pc = 0x184198u;
label_184198:
    // 0x184198: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x184198u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
    // 0x18419c: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x18419cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x1841a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1841a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1841a4: 0xae800018  sw          $zero, 0x18($s4)
    ctx->pc = 0x1841a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
    // 0x1841a8: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x1841a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
    // 0x1841ac: 0x0  nop
    ctx->pc = 0x1841acu;
    // NOP
label_1841b0:
    // 0x1841b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1841b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1841b4: 0x0  nop
    ctx->pc = 0x1841b4u;
    // NOP
label_1841b8:
    // 0x1841b8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1841b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1841bc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1841bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1841c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1841c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1841c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1841c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1841c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1841c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1841cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1841ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1841d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1841d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1841d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1841d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1841d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1841d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1841dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1841dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1841e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1841E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1841E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1841E0u;
        // 0x1841e4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1841E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1841E8u;
}
