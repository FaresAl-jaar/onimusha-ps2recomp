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

// Function: sub_001E9E20
// Address: 0x1e9e20 - 0x1ea268
void sub_001E9E20_0x1e9e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9E20_0x1e9e20");
#endif

    switch (ctx->pc) {
        case 0x1e9e80u: goto label_1e9e80;
        case 0x1e9ea0u: goto label_1e9ea0;
        case 0x1e9ea8u: goto label_1e9ea8;
        case 0x1e9eb4u: goto label_1e9eb4;
        case 0x1e9eccu: goto label_1e9ecc;
        case 0x1e9ef0u: goto label_1e9ef0;
        case 0x1e9f00u: goto label_1e9f00;
        case 0x1e9f0cu: goto label_1e9f0c;
        case 0x1e9f18u: goto label_1e9f18;
        case 0x1e9f6cu: goto label_1e9f6c;
        case 0x1e9f80u: goto label_1e9f80;
        case 0x1e9f90u: goto label_1e9f90;
        case 0x1e9fa4u: goto label_1e9fa4;
        case 0x1ea00cu: goto label_1ea00c;
        case 0x1ea024u: goto label_1ea024;
        case 0x1ea0a0u: goto label_1ea0a0;
        case 0x1ea0b4u: goto label_1ea0b4;
        case 0x1ea0c8u: goto label_1ea0c8;
        case 0x1ea0dcu: goto label_1ea0dc;
        case 0x1ea0f0u: goto label_1ea0f0;
        case 0x1ea124u: goto label_1ea124;
        case 0x1ea154u: goto label_1ea154;
        case 0x1ea164u: goto label_1ea164;
        case 0x1ea1a0u: goto label_1ea1a0;
        case 0x1ea1ccu: goto label_1ea1cc;
        case 0x1ea1e8u: goto label_1ea1e8;
        case 0x1ea214u: goto label_1ea214;
        case 0x1ea220u: goto label_1ea220;
        case 0x1ea238u: goto label_1ea238;
        default: break;
    }

    ctx->pc = 0x1e9e20u;

    // 0x1e9e20: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x1e9e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x1e9e24: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e9e28: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e9e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1e9e2c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1e9e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1e9e30: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e9e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1e9e34: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1e9e34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e9e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e9e3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e9e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e9e40: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e9e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e9e44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e9e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e9e48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e9e48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e9e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e9e50: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e9e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e54: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e9e54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9e58: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9E58u;
    {
        const bool branch_taken_0x1e9e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E58u;
        // 0x1e9e5c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e58) {
            ctx->pc = 0x1E9E68u;
            goto label_1e9e68;
        }
    }
    ctx->pc = 0x1E9E60u;
    // 0x1e9e60: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x1E9E60u;
    {
        const bool branch_taken_0x1e9e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E60u;
        // 0x1e9e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e60) {
            ctx->pc = 0x1EA240u;
            goto label_1ea240;
        }
    }
    ctx->pc = 0x1E9E68u;
label_1e9e68:
    // 0x1e9e68: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9E68u;
    {
        const bool branch_taken_0x1e9e68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E68u;
        // 0x1e9e6c: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e68) {
            ctx->pc = 0x1E9E78u;
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9E70u;
    // 0x1e9e70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9E70u;
    {
        const bool branch_taken_0x1e9e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E70u;
        // 0x1e9e74: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e70) {
            ctx->pc = 0x1E9E88u;
            goto label_1e9e88;
        }
    }
    ctx->pc = 0x1E9E78u;
label_1e9e78:
    // 0x1e9e78: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1E9E78u;
    SET_GPR_U32(ctx, 31, 0x1E9E80u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1E9E78u, 0x1E9E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E80u;
label_1e9e80:
    // 0x1e9e80: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e9e80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e84: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e9e84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9e88:
    // 0x1e9e88: 0x92450038  lbu         $a1, 0x38($s2)
    ctx->pc = 0x1e9e88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1e9e8c: 0x92460039  lbu         $a2, 0x39($s2)
    ctx->pc = 0x1e9e8cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
    // 0x1e9e90: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1e9e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e9e94: 0x92480046  lbu         $t0, 0x46($s2)
    ctx->pc = 0x1e9e94u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x1e9e98: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x1E9E98u;
    SET_GPR_U32(ctx, 31, 0x1E9EA0u);
    ctx->pc = 0x1E9E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9E98u;
    // 0x1e9e9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x1E9E98u, 0x1E9EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9EA0u;
label_1e9ea0:
    // 0x1e9ea0: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x1E9EA0u;
    SET_GPR_U32(ctx, 31, 0x1E9EA8u);
    ctx->pc = 0x1E9EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9EA0u;
    // 0x1e9ea4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x1E9EA0u, 0x1E9EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9EA8u;
label_1e9ea8:
    // 0x1e9ea8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e9ea8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9eac: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x1E9EACu;
    SET_GPR_U32(ctx, 31, 0x1E9EB4u);
    ctx->pc = 0x1E9EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9EACu;
    // 0x1e9eb0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x1E9EACu, 0x1E9EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9EB4u;
label_1e9eb4:
    // 0x1e9eb4: 0x92480032  lbu         $t0, 0x32($s2)
    ctx->pc = 0x1e9eb4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
    // 0x1e9eb8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e9eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ebc: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x1e9ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x1e9ec0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1e9ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9ec4: 0xc074458  jal         func_1D1160
    ctx->pc = 0x1E9EC4u;
    SET_GPR_U32(ctx, 31, 0x1E9ECCu);
    ctx->pc = 0x1E9EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9EC4u;
    // 0x1e9ec8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x1E9EC4u, 0x1E9ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9ECCu;
label_1e9ecc:
    // 0x1e9ecc: 0x92450033  lbu         $a1, 0x33($s2)
    ctx->pc = 0x1e9eccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x1e9ed0: 0xc64c0048  lwc1        $f12, 0x48($s2)
    ctx->pc = 0x1e9ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e9ed4: 0xc64d004c  lwc1        $f13, 0x4C($s2)
    ctx->pc = 0x1e9ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e9ed8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e9ed8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9edc: 0xc64e0058  lwc1        $f14, 0x58($s2)
    ctx->pc = 0x1e9edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e9ee0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e9ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9ee4: 0xc64f005c  lwc1        $f15, 0x5C($s2)
    ctx->pc = 0x1e9ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1e9ee8: 0xc074be8  jal         func_1D2FA0
    ctx->pc = 0x1E9EE8u;
    SET_GPR_U32(ctx, 31, 0x1E9EF0u);
    ctx->pc = 0x1E9EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9EE8u;
    // 0x1e9eec: 0x34440080  ori         $a0, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2FA0u, 0x1E9EE8u, 0x1E9EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9EF0u;
label_1e9ef0:
    // 0x1e9ef0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e9ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ef4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1e9ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e9ef8: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1E9EF8u;
    SET_GPR_U32(ctx, 31, 0x1E9F00u);
    ctx->pc = 0x1E9EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9EF8u;
    // 0x1e9efc: 0x26460080  addiu       $a2, $s2, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E9EF8u, 0x1E9F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F00u;
label_1e9f00:
    // 0x1e9f00: 0x8645003c  lh          $a1, 0x3C($s2)
    ctx->pc = 0x1e9f00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1e9f04: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x1E9F04u;
    SET_GPR_U32(ctx, 31, 0x1E9F0Cu);
    ctx->pc = 0x1E9F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9F04u;
    // 0x1e9f08: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x1E9F04u, 0x1E9F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F0Cu;
label_1e9f0c:
    // 0x1e9f0c: 0x86450040  lh          $a1, 0x40($s2)
    ctx->pc = 0x1e9f0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1e9f10: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x1E9F10u;
    SET_GPR_U32(ctx, 31, 0x1E9F18u);
    ctx->pc = 0x1E9F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9F10u;
    // 0x1e9f14: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x1E9F10u, 0x1E9F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F18u;
label_1e9f18:
    // 0x1e9f18: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e9f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e9f1c: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x1e9f1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1e9f20: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x1e9f20u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x1e9f24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e9f28: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1e9f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e9f2c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1e9f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e9f30: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x1e9f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1e9f34: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e9f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e9f38: 0x7fa90100  sq          $t1, 0x100($sp)
    ctx->pc = 0x1e9f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 9));
    // 0x1e9f3c: 0x78285c30  lq          $t0, 0x5C30($at)
    ctx->pc = 0x1e9f3cu;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C30u));
    // 0x1e9f40: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e9f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e9f44: 0x7fa80110  sq          $t0, 0x110($sp)
    ctx->pc = 0x1e9f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 8));
    // 0x1e9f48: 0x78275c40  lq          $a3, 0x5C40($at)
    ctx->pc = 0x1e9f48u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C40u));
    // 0x1e9f4c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e9f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e9f50: 0x7fa70120  sq          $a3, 0x120($sp)
    ctx->pc = 0x1e9f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 7));
    // 0x1e9f54: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x1e9f54u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x1e9f58: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e9f58u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e9f5c: 0x7ba301c0  lq          $v1, 0x1C0($sp)
    ctx->pc = 0x1e9f5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e9f60: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e9f60u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e9f64: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E9F64u;
    SET_GPR_U32(ctx, 31, 0x1E9F6Cu);
    ctx->pc = 0x1E9F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9F64u;
    // 0x1e9f68: 0xafa2013c  sw          $v0, 0x13C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E9F64u, 0x1E9F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F6Cu;
label_1e9f6c:
    // 0x1e9f6c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1e9f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e9f70: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e9f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e9f74: 0x24a56c20  addiu       $a1, $a1, 0x6C20
    ctx->pc = 0x1e9f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27680));
    // 0x1e9f78: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E9F78u;
    SET_GPR_U32(ctx, 31, 0x1E9F80u);
    ctx->pc = 0x1E9F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9F78u;
    // 0x1e9f7c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E9F78u, 0x1E9F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F80u;
label_1e9f80:
    // 0x1e9f80: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1e9f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e9f84: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1e9f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e9f88: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E9F88u;
    SET_GPR_U32(ctx, 31, 0x1E9F90u);
    ctx->pc = 0x1E9F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9F88u;
    // 0x1e9f8c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E9F88u, 0x1E9F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F90u;
label_1e9f90:
    // 0x1e9f90: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1e9f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e9f94: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e9f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e9f98: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e9f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e9f9c: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E9F9Cu;
    SET_GPR_U32(ctx, 31, 0x1E9FA4u);
    ctx->pc = 0x1E9FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9F9Cu;
    // 0x1e9fa0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E9F9Cu, 0x1E9FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9FA4u;
label_1e9fa4:
    // 0x1e9fa4: 0x7a420060  lq          $v0, 0x60($s2)
    ctx->pc = 0x1e9fa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1e9fa8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e9fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9fac: 0x161c3c  dsll32      $v1, $s6, 16
    ctx->pc = 0x1e9facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 16));
    // 0x1e9fb0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e9fb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1e9fb4: 0x7c220040  sq          $v0, 0x40($at)
    ctx->pc = 0x1e9fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 64), GPR_VEC(ctx, 2));
    // 0x1e9fb8: 0x7a420070  lq          $v0, 0x70($s2)
    ctx->pc = 0x1e9fb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1e9fbc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e9fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9fc0: 0x7c220050  sq          $v0, 0x50($at)
    ctx->pc = 0x1e9fc0u;
    runtime->Store128(rdram, ctx, 0x70000050u, GPR_VEC(ctx, 2));
    // 0x1e9fc4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e9fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9fc8: 0x8c22004c  lw          $v0, 0x4C($at)
    ctx->pc = 0x1e9fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x1e9fcc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1e9fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e9fd0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e9fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9fd4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e9fd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e9fd8: 0xac22004c  sw          $v0, 0x4C($at)
    ctx->pc = 0x1e9fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    // 0x1e9fdc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e9fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9fe0: 0x8c22005c  lw          $v0, 0x5C($at)
    ctx->pc = 0x1e9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000005Cu)); // MMIO: 0x7000005c
    // 0x1e9fe4: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x1e9fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e9fe8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e9fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9fec: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e9fecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e9ff0: 0xac22005c  sw          $v0, 0x5C($at)
    ctx->pc = 0x1e9ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 92), GPR_U32(ctx, 2));
    // 0x1e9ff4: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x1e9ff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1e9ff8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1e9ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1e9ffc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9FFCu;
    {
        const bool branch_taken_0x1e9ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FFCu;
        // 0x1ea000: 0x141100  sll         $v0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ffc) {
            ctx->pc = 0x1EA010u;
            goto label_1ea010;
        }
    }
    ctx->pc = 0x1EA004u;
    // 0x1ea004: 0xc07865c  jal         func_1E1970
    ctx->pc = 0x1EA004u;
    SET_GPR_U32(ctx, 31, 0x1EA00Cu);
    ctx->pc = 0x1EA008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA004u;
    // 0x1ea008: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1970u, 0x1EA004u, 0x1EA00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA00Cu;
label_1ea00c:
    // 0x1ea00c: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ea00cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1ea010:
    // 0x1ea010: 0x92450031  lbu         $a1, 0x31($s2)
    ctx->pc = 0x1ea010u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x1ea014: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ea014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ea018: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ea018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ea01c: 0xc078604  jal         func_1E1810
    ctx->pc = 0x1EA01Cu;
    SET_GPR_U32(ctx, 31, 0x1EA024u);
    ctx->pc = 0x1EA020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA01Cu;
    // 0x1ea020: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x1EA01Cu, 0x1EA024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA024u;
label_1ea024:
    // 0x1ea024: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ea024u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ea028: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x1ea028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1ea02c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ea02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ea030: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1EA030u;
    {
        const bool branch_taken_0x1ea030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea030) {
            ctx->pc = 0x1EA170u;
            goto label_1ea170;
        }
    }
    ctx->pc = 0x1EA038u;
    // 0x1ea038: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x1ea038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea03c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ea03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ea040: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ea040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ea044: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1ea044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea048: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ea048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ea04c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ea04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea050: 0x86620008  lh          $v0, 0x8($s3)
    ctx->pc = 0x1ea050u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1ea054: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ea054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ea058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea05c: 0x0  nop
    ctx->pc = 0x1ea05cu;
    // NOP
    // 0x1ea060: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ea060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ea064: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1ea064u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1ea068: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ea068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ea06c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1ea06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1ea070: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x1ea070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea074: 0x8662000a  lh          $v0, 0xA($s3)
    ctx->pc = 0x1ea074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x1ea078: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ea078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ea07c: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1ea07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1ea080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ea080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea084: 0x0  nop
    ctx->pc = 0x1ea084u;
    // NOP
    // 0x1ea088: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ea088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ea08c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1ea08cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1ea090: 0x0  nop
    ctx->pc = 0x1ea090u;
    // NOP
    // 0x1ea094: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ea094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ea098: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EA098u;
    SET_GPR_U32(ctx, 31, 0x1EA0A0u);
    ctx->pc = 0x1EA09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA098u;
    // 0x1ea09c: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EA098u, 0x1EA0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA0A0u;
label_1ea0a0:
    // 0x1ea0a0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ea0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea0a4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ea0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ea0a8: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x1ea0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1ea0ac: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EA0ACu;
    SET_GPR_U32(ctx, 31, 0x1EA0B4u);
    ctx->pc = 0x1EA0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA0ACu;
    // 0x1ea0b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EA0ACu, 0x1EA0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA0B4u;
label_1ea0b4:
    // 0x1ea0b4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ea0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea0b8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ea0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ea0bc: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x1ea0bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1ea0c0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EA0C0u;
    SET_GPR_U32(ctx, 31, 0x1EA0C8u);
    ctx->pc = 0x1EA0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA0C0u;
    // 0x1ea0c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EA0C0u, 0x1EA0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA0C8u;
label_1ea0c8:
    // 0x1ea0c8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ea0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea0cc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ea0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ea0d0: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x1ea0d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x1ea0d4: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1EA0D4u;
    SET_GPR_U32(ctx, 31, 0x1EA0DCu);
    ctx->pc = 0x1EA0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA0D4u;
    // 0x1ea0d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1EA0D4u, 0x1EA0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA0DCu;
label_1ea0dc:
    // 0x1ea0dc: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ea0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ea0e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ea0e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea0e4: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ea0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ea0e8: 0xc078624  jal         func_1E1890
    ctx->pc = 0x1EA0E8u;
    SET_GPR_U32(ctx, 31, 0x1EA0F0u);
    ctx->pc = 0x1EA0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA0E8u;
    // 0x1ea0ec: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1890u, 0x1EA0E8u, 0x1EA0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA0F0u;
label_1ea0f0:
    // 0x1ea0f0: 0x924b0035  lbu         $t3, 0x35($s2)
    ctx->pc = 0x1ea0f0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
    // 0x1ea0f4: 0x924a0033  lbu         $t2, 0x33($s2)
    ctx->pc = 0x1ea0f4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x1ea0f8: 0x154b000d  bne         $t2, $t3, . + 4 + (0xD << 2)
    ctx->pc = 0x1EA0F8u;
    {
        const bool branch_taken_0x1ea0f8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 11));
        ctx->pc = 0x1EA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0F8u;
        // 0x1ea0fc: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea0f8) {
            ctx->pc = 0x1EA130u;
            goto label_1ea130;
        }
    }
    ctx->pc = 0x1EA100u;
    // 0x1ea100: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1ea100u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea104: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ea104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ea108: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ea108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ea10c: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ea10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ea110: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1ea110u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1ea114: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1ea114u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1ea118: 0x34e90050  ori         $t1, $a3, 0x50
    ctx->pc = 0x1ea118u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    // 0x1ea11c: 0xc076090  jal         func_1D8240
    ctx->pc = 0x1EA11Cu;
    SET_GPR_U32(ctx, 31, 0x1EA124u);
    ctx->pc = 0x1EA120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA11Cu;
    // 0x1ea120: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8240u, 0x1EA11Cu, 0x1EA124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA124u;
label_1ea124:
    // 0x1ea124: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EA124u;
    {
        const bool branch_taken_0x1ea124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA124u;
        // 0x1ea128: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea124) {
            ctx->pc = 0x1EA158u;
            goto label_1ea158;
        }
    }
    ctx->pc = 0x1EA12Cu;
    // 0x1ea12c: 0x0  nop
    ctx->pc = 0x1ea12cu;
    // NOP
label_1ea130:
    // 0x1ea130: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1ea130u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea134: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ea134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ea138: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ea138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ea13c: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ea13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ea140: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1ea140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1ea144: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1ea144u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1ea148: 0x34e90050  ori         $t1, $a3, 0x50
    ctx->pc = 0x1ea148u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    // 0x1ea14c: 0xc07616c  jal         func_1D85B0
    ctx->pc = 0x1EA14Cu;
    SET_GPR_U32(ctx, 31, 0x1EA154u);
    ctx->pc = 0x1EA150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA14Cu;
    // 0x1ea150: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D85B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D85B0u, 0x1EA14Cu, 0x1EA154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA154u;
label_1ea154:
    // 0x1ea154: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ea154u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1ea158:
    // 0x1ea158: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ea158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ea15c: 0xc07864c  jal         func_1E1930
    ctx->pc = 0x1EA15Cu;
    SET_GPR_U32(ctx, 31, 0x1EA164u);
    ctx->pc = 0x1EA160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA15Cu;
    // 0x1ea160: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1930u, 0x1EA15Cu, 0x1EA164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA164u;
label_1ea164:
    // 0x1ea164: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1EA164u;
    {
        const bool branch_taken_0x1ea164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA164u;
        // 0x1ea168: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea164) {
            ctx->pc = 0x1EA1D0u;
            goto label_1ea1d0;
        }
    }
    ctx->pc = 0x1EA16Cu;
    // 0x1ea16c: 0x0  nop
    ctx->pc = 0x1ea16cu;
    // NOP
label_1ea170:
    // 0x1ea170: 0x924b0035  lbu         $t3, 0x35($s2)
    ctx->pc = 0x1ea170u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
    // 0x1ea174: 0x924a0033  lbu         $t2, 0x33($s2)
    ctx->pc = 0x1ea174u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x1ea178: 0x154b000b  bne         $t2, $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x1EA178u;
    {
        const bool branch_taken_0x1ea178 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 11));
        ctx->pc = 0x1EA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA178u;
        // 0x1ea17c: 0x3c077000  lui         $a3, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea178) {
            ctx->pc = 0x1EA1A8u;
            goto label_1ea1a8;
        }
    }
    ctx->pc = 0x1EA180u;
    // 0x1ea180: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ea180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ea184: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ea184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ea188: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ea188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ea18c: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1ea18cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1ea190: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1ea190u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1ea194: 0x34e90050  ori         $t1, $a3, 0x50
    ctx->pc = 0x1ea194u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    // 0x1ea198: 0xc076090  jal         func_1D8240
    ctx->pc = 0x1EA198u;
    SET_GPR_U32(ctx, 31, 0x1EA1A0u);
    ctx->pc = 0x1EA19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA198u;
    // 0x1ea19c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8240u, 0x1EA198u, 0x1EA1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA1A0u;
label_1ea1a0:
    // 0x1ea1a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EA1A0u;
    {
        const bool branch_taken_0x1ea1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1A0u;
        // 0x1ea1a4: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1a0) {
            ctx->pc = 0x1EA1D0u;
            goto label_1ea1d0;
        }
    }
    ctx->pc = 0x1EA1A8u;
label_1ea1a8:
    // 0x1ea1a8: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1ea1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1ea1ac: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ea1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ea1b0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ea1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ea1b4: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ea1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ea1b8: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1ea1b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1ea1bc: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1ea1bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1ea1c0: 0x34e90050  ori         $t1, $a3, 0x50
    ctx->pc = 0x1ea1c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    // 0x1ea1c4: 0xc07616c  jal         func_1D85B0
    ctx->pc = 0x1EA1C4u;
    SET_GPR_U32(ctx, 31, 0x1EA1CCu);
    ctx->pc = 0x1EA1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA1C4u;
    // 0x1ea1c8: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D85B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D85B0u, 0x1EA1C4u, 0x1EA1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA1CCu;
label_1ea1cc:
    // 0x1ea1cc: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ea1ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1ea1d0:
    // 0x1ea1d0: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x1ea1d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1ea1d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ea1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ea1d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA1D8u;
    {
        const bool branch_taken_0x1ea1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1D8u;
        // 0x1ea1dc: 0x141100  sll         $v0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1d8) {
            ctx->pc = 0x1EA1F0u;
            goto label_1ea1f0;
        }
    }
    ctx->pc = 0x1EA1E0u;
    // 0x1ea1e0: 0xc07866c  jal         func_1E19B0
    ctx->pc = 0x1EA1E0u;
    SET_GPR_U32(ctx, 31, 0x1EA1E8u);
    ctx->pc = 0x1EA1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA1E0u;
    // 0x1ea1e4: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19B0u, 0x1EA1E0u, 0x1EA1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA1E8u;
label_1ea1e8:
    // 0x1ea1e8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ea1e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ea1ec: 0x0  nop
    ctx->pc = 0x1ea1ecu;
    // NOP
label_1ea1f0:
    // 0x1ea1f0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA1F0u;
    {
        const bool branch_taken_0x1ea1f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1F0u;
        // 0x1ea1f4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1f0) {
            ctx->pc = 0x1EA200u;
            goto label_1ea200;
        }
    }
    ctx->pc = 0x1EA1F8u;
    // 0x1ea1f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1EA1F8u;
    {
        const bool branch_taken_0x1ea1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea1f8) {
            ctx->pc = 0x1EA240u;
            goto label_1ea240;
        }
    }
    ctx->pc = 0x1EA200u;
label_1ea200:
    // 0x1ea200: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1ea200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1ea204: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ea204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ea208: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1ea208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1ea20c: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x1EA20Cu;
    SET_GPR_U32(ctx, 31, 0x1EA214u);
    ctx->pc = 0x1EA210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA20Cu;
    // 0x1ea210: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x1EA20Cu, 0x1EA214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA214u;
label_1ea214:
    // 0x1ea214: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ea214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea218: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1EA218u;
    SET_GPR_U32(ctx, 31, 0x1EA220u);
    ctx->pc = 0x1EA21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA218u;
    // 0x1ea21c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1EA218u, 0x1EA220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA220u;
label_1ea220:
    // 0x1ea220: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ea220u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ea224: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ea224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea228: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1ea228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ea22c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ea22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea230: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1EA230u;
    SET_GPR_U32(ctx, 31, 0x1EA238u);
    ctx->pc = 0x1EA234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA230u;
    // 0x1ea234: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1EA230u, 0x1EA238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA238u;
label_1ea238:
    // 0x1ea238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ea238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea23c: 0x0  nop
    ctx->pc = 0x1ea23cu;
    // NOP
label_1ea240:
    // 0x1ea240: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ea240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ea244: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1ea244u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea248: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1ea248u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ea24c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1ea24cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ea250: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ea250u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ea254: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ea254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ea258: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ea258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea25c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ea25cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea260: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA260u;
        // 0x1ea264: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA268u;
}
