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

// Function: sub_00403B00
// Address: 0x403b00 - 0x403c3c
void sub_00403B00_0x403b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00403B00_0x403b00");
#endif

    switch (ctx->pc) {
        case 0x403b5cu: goto label_403b5c;
        case 0x403b80u: goto label_403b80;
        case 0x403bb8u: goto label_403bb8;
        case 0x403c0cu: goto label_403c0c;
        default: break;
    }

    ctx->pc = 0x403b00u;

    // 0x403b00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x403b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x403b04: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x403b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
    // 0x403b08: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x403b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x403b0c: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x403b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x403b10: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x403b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x403b14: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x403b14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403b18: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x403b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x403b1c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x403b1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403b20: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x403b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x403b24: 0x3c158007  lui         $s5, 0x8007
    ctx->pc = 0x403b24u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32775 << 16));
    // 0x403b28: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x403b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x403b2c: 0x3093ffff  andi        $s3, $a0, 0xFFFF
    ctx->pc = 0x403b2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x403b30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x403b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x403b34: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x403b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x403b38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x403b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x403b3c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x403b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x403b40: 0x8ea36700  lw          $v1, 0x6700($s5)
    ctx->pc = 0x403b40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80076700u));
    // 0x403b44: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x403b44u;
    SET_GPR_S32(ctx, 20, (int32_t)runtime->Load32(rdram, ctx, 0xB0001800u));
    // 0x403b48: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x403b48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x403b4c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x403B4Cu;
    {
        const bool branch_taken_0x403b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x403B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403B4Cu;
        // 0x403b50: 0x2749821  addu        $s3, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403b4c) {
            ctx->pc = 0x403B70u;
            goto label_403b70;
        }
    }
    ctx->pc = 0x403B54u;
    // 0x403b54: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x403B54u;
    {
        const bool branch_taken_0x403b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403B54u;
        // 0x403b58: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403b54) {
            ctx->pc = 0x403C10u;
            goto label_403c10;
        }
    }
    ctx->pc = 0x403B5Cu;
label_403b5c:
    // 0x403b5c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x403b5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403b60: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x403b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x403b64: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x403b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x403b68: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x403B68u;
    {
        const bool branch_taken_0x403b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403B68u;
        // 0x403b6c: 0xfca26708  sd          $v0, 0x6708($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 26376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403b68) {
            ctx->pc = 0x403BA0u;
            goto label_403ba0;
        }
    }
    ctx->pc = 0x403B70u;
label_403b70:
    // 0x403b70: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x403b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
    // 0x403b74: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x403b74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403b78: 0xdca46708  ld          $a0, 0x6708($a1)
    ctx->pc = 0x403b78u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x80076708u));
    // 0x403b7c: 0x641016  dsrlv       $v0, $a0, $v1
    ctx->pc = 0x403b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
label_403b80:
    // 0x403b80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x403b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x403b84: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x403B84u;
    {
        const bool branch_taken_0x403b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403B84u;
        // 0x403b88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403b84) {
            ctx->pc = 0x403B5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403b5c;
        }
    }
    ctx->pc = 0x403B8Cu;
    // 0x403b8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x403b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x403b90: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x403b90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x403b94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x403B94u;
    {
        const bool branch_taken_0x403b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x403B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403B94u;
        // 0x403b98: 0x641016  dsrlv       $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403b94) {
            ctx->pc = 0x403B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403b80;
        }
    }
    ctx->pc = 0x403B9Cu;
    // 0x403b9c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x403b9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_403ba0:
    // 0x403ba0: 0x640001b  bltz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x403BA0u;
    {
        const bool branch_taken_0x403ba0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x403BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403BA0u;
        // 0x403ba4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403ba0) {
            ctx->pc = 0x403C10u;
            goto label_403c10;
        }
    }
    ctx->pc = 0x403BA8u;
    // 0x403ba8: 0x380882d  daddu       $s1, $gp, $zero
    ctx->pc = 0x403ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403bac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x403bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403bb0: 0xc01d816  jal         func_076058
    ctx->pc = 0x403BB0u;
    SET_GPR_U32(ctx, 31, 0x403BB8u);
    ctx->pc = 0x403BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403BB0u;
    // 0x403bb4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76058u, 0x403BB0u, 0x403BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403BB8u;
label_403bb8:
    // 0x403bb8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x403bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x403bbc: 0x3c088007  lui         $t0, 0x8007
    ctx->pc = 0x403bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
    // 0x403bc0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x403bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x403bc4: 0x25036740  addiu       $v1, $t0, 0x6740
    ctx->pc = 0x403bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 26432));
    // 0x403bc8: 0x8ea56700  lw          $a1, 0x6700($s5)
    ctx->pc = 0x403bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
    // 0x403bcc: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x403bccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x403bd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x403bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x403bd4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x403bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x403bd8: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x403bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x403bdc: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x403bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x403be0: 0xa4940002  sh          $s4, 0x2($a0)
    ctx->pc = 0x403be0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 20));
    // 0x403be4: 0xa4930000  sh          $s3, 0x0($a0)
    ctx->pc = 0x403be4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x403be8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x403be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403bec: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x403becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x403bf0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x403bf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403bf4: 0xacf10010  sw          $s1, 0x10($a3)
    ctx->pc = 0x403bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 17));
    // 0x403bf8: 0x95046740  lhu         $a0, 0x6740($t0)
    ctx->pc = 0x403bf8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 26432)));
    // 0x403bfc: 0xacd60008  sw          $s6, 0x8($a2)
    ctx->pc = 0x403bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 22));
    // 0x403c00: 0xac77000c  sw          $s7, 0xC($v1)
    ctx->pc = 0x403c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 23));
    // 0x403c04: 0xc01d918  jal         func_076460
    ctx->pc = 0x403C04u;
    SET_GPR_U32(ctx, 31, 0x403C0Cu);
    ctx->pc = 0x403C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403C04u;
    // 0x403c08: 0xaea56700  sw          $a1, 0x6700($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 26368), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x403C04u, 0x403C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403C0Cu;
label_403c0c:
    // 0x403c0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x403c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_403c10:
    // 0x403c10: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x403c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x403c14: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x403c14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x403c18: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x403c18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x403c1c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x403c1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x403c20: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x403c20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x403c24: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x403c24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x403c28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x403c28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x403c2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x403c2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x403c30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x403c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x403c34: 0x3e00008  jr          $ra
    ctx->pc = 0x403C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x403C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403C34u;
        // 0x403c38: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x403C3Cu;
}
