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

// Function: sub_00137B18
// Address: 0x137b18 - 0x137cc8
void sub_00137B18_0x137b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137B18_0x137b18");
#endif

    switch (ctx->pc) {
        case 0x137b68u: goto label_137b68;
        case 0x137b80u: goto label_137b80;
        case 0x137be0u: goto label_137be0;
        case 0x137c24u: goto label_137c24;
        case 0x137c70u: goto label_137c70;
        case 0x137c84u: goto label_137c84;
        case 0x137c8cu: goto label_137c8c;
        case 0x137c9cu: goto label_137c9c;
        default: break;
    }

    ctx->pc = 0x137b18u;

    // 0x137b18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x137b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x137b1c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x137b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x137b20: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x137b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x137b24: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x137b24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b28: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x137b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x137b2c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x137b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b30: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x137b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x137b34: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x137b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x137b38: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x137b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b3c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x137b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x137b40: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x137b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x137b44: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x137b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x137b48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x137b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137b4c: 0x28620081  slti        $v0, $v1, 0x81
    ctx->pc = 0x137b4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x137b50: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x137B50u;
    {
        const bool branch_taken_0x137b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B50u;
        // 0x137b54: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b50) {
            ctx->pc = 0x137B70u;
            goto label_137b70;
        }
    }
    ctx->pc = 0x137B58u;
    // 0x137b58: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x137b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x137b5c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x137b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b60: 0xc04dfc8  jal         func_137F20
    ctx->pc = 0x137B60u;
    SET_GPR_U32(ctx, 31, 0x137B68u);
    ctx->pc = 0x137B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137B60u;
    // 0x137b64: 0x24844808  addiu       $a0, $a0, 0x4808 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F20u, 0x137B60u, 0x137B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B68u;
label_137b68:
    // 0x137b68: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x137B68u;
    {
        const bool branch_taken_0x137b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B68u;
        // 0x137b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b68) {
            ctx->pc = 0x137CA0u;
            goto label_137ca0;
        }
    }
    ctx->pc = 0x137B70u;
label_137b70:
    // 0x137b70: 0x3c15006b  lui         $s5, 0x6B
    ctx->pc = 0x137b70u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)107 << 16));
    // 0x137b74: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x137b74u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x137b78: 0xc043808  jal         func_10E020
    ctx->pc = 0x137B78u;
    SET_GPR_U32(ctx, 31, 0x137B80u);
    ctx->pc = 0x137B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137B78u;
    // 0x137b7c: 0x8ea46700  lw          $a0, 0x6700($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x137B78u, 0x137B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B80u;
label_137b80:
    // 0x137b80: 0x8e22aa04  lw          $v0, -0x55FC($s1)
    ctx->pc = 0x137b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945284)));
    // 0x137b84: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x137b84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x137b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x137b8c: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x137b8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x137b90: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x137B90u;
    {
        const bool branch_taken_0x137b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B90u;
        // 0x137b94: 0xae22aa04  sw          $v0, -0x55FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294945284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b90) {
            ctx->pc = 0x137B9Cu;
            goto label_137b9c;
        }
    }
    ctx->pc = 0x137B98u;
    // 0x137b98: 0xae20aa04  sw          $zero, -0x55FC($s1)
    ctx->pc = 0x137b98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945284), GPR_U32(ctx, 0));
label_137b9c:
    // 0x137b9c: 0x8e23aa04  lw          $v1, -0x55FC($s1)
    ctx->pc = 0x137b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945284)));
    // 0x137ba0: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x137ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x137ba4: 0x3c16006b  lui         $s6, 0x6B
    ctx->pc = 0x137ba4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)107 << 16));
    // 0x137ba8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x137ba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x137bac: 0x26c264c0  addiu       $v0, $s6, 0x64C0
    ctx->pc = 0x137bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 25792));
    // 0x137bb0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x137bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x137bb4: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x137bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20));
    // 0x137bb8: 0xac920004  sw          $s2, 0x4($a0)
    ctx->pc = 0x137bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
    // 0x137bbc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x137bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137bc0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x137bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x137bc4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x137bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137bc8: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x137BC8u;
    {
        const bool branch_taken_0x137bc8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x137BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137BC8u;
        // 0x137bcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137bc8) {
            ctx->pc = 0x137C08u;
            goto label_137c08;
        }
    }
    ctx->pc = 0x137BD0u;
    // 0x137bd0: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x137bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x137bd4: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x137bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x137bd8: 0x2651021  addu        $v0, $s3, $a1
    ctx->pc = 0x137bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x137bdc: 0x0  nop
    ctx->pc = 0x137bdcu;
    // NOP
label_137be0:
    // 0x137be0: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x137be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x137be4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x137be4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137be8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x137be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x137bec: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x137becu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x137bf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x137bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137bf4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x137bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x137bf8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x137BF8u;
    {
        const bool branch_taken_0x137bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137BF8u;
        // 0x137bfc: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137bf8) {
            ctx->pc = 0x137BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137be0;
        }
    }
    ctx->pc = 0x137C00u;
    // 0x137c00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137C00u;
    {
        const bool branch_taken_0x137c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C00u;
        // 0x137c04: 0x8d04aa04  lw          $a0, -0x55FC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294945284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c00) {
            ctx->pc = 0x137C10u;
            goto label_137c10;
        }
    }
    ctx->pc = 0x137C08u;
label_137c08:
    // 0x137c08: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x137c08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x137c0c: 0x8d04aa04  lw          $a0, -0x55FC($t0)
    ctx->pc = 0x137c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294945284)));
label_137c10:
    // 0x137c10: 0x24120028  addiu       $s2, $zero, 0x28
    ctx->pc = 0x137c10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x137c14: 0x24f042c0  addiu       $s0, $a3, 0x42C0
    ctx->pc = 0x137c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 17088));
    // 0x137c18: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x137c18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x137c1c: 0xc04484a  jal         func_112128
    ctx->pc = 0x137C1Cu;
    SET_GPR_U32(ctx, 31, 0x137C24u);
    ctx->pc = 0x137C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C1Cu;
    // 0x137c20: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x137C1Cu, 0x137C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C24u;
label_137c24:
    // 0x137c24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137c28: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x137C28u;
    {
        const bool branch_taken_0x137c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x137C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C28u;
        // 0x137c2c: 0x8e25aa04  lw          $a1, -0x55FC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c28) {
            ctx->pc = 0x137C3Cu;
            goto label_137c3c;
        }
    }
    ctx->pc = 0x137C30u;
    // 0x137c30: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x137c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x137c34: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x137C34u;
    {
        const bool branch_taken_0x137c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C34u;
        // 0x137c38: 0x24844838  addiu       $a0, $a0, 0x4838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c34) {
            ctx->pc = 0x137C7Cu;
            goto label_137c7c;
        }
    }
    ctx->pc = 0x137C3Cu;
label_137c3c:
    // 0x137c3c: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x137c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x137c40: 0x26c264c0  addiu       $v0, $s6, 0x64C0
    ctx->pc = 0x137c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 25792));
    // 0x137c44: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x137c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x137c48: 0xa73818  mult        $a3, $a1, $a3
    ctx->pc = 0x137c48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x137c4c: 0xb21818  mult        $v1, $a1, $s2
    ctx->pc = 0x137c4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x137c50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x137c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137c54: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x137c54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x137c58: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x137c58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x137c5c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x137c5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c60: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x137c60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x137c64: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x137c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x137c68: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x137C68u;
    SET_GPR_U32(ctx, 31, 0x137C70u);
    ctx->pc = 0x137C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C68u;
    // 0x137c6c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x137C68u, 0x137C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C70u;
label_137c70:
    // 0x137c70: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x137C70u;
    {
        const bool branch_taken_0x137c70 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x137C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C70u;
        // 0x137c74: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c70) {
            ctx->pc = 0x137C94u;
            goto label_137c94;
        }
    }
    ctx->pc = 0x137C78u;
    // 0x137c78: 0x24844858  addiu       $a0, $a0, 0x4858
    ctx->pc = 0x137c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18520));
label_137c7c:
    // 0x137c7c: 0xc04dfc8  jal         func_137F20
    ctx->pc = 0x137C7Cu;
    SET_GPR_U32(ctx, 31, 0x137C84u);
    ctx->pc = 0x137F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F20u, 0x137C7Cu, 0x137C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C84u;
label_137c84:
    // 0x137c84: 0xc043800  jal         func_10E000
    ctx->pc = 0x137C84u;
    SET_GPR_U32(ctx, 31, 0x137C8Cu);
    ctx->pc = 0x137C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C84u;
    // 0x137c88: 0x8ea46700  lw          $a0, 0x6700($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x137C84u, 0x137C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C8Cu;
label_137c8c:
    // 0x137c8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x137C8Cu;
    {
        const bool branch_taken_0x137c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C8Cu;
        // 0x137c90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c8c) {
            ctx->pc = 0x137CA0u;
            goto label_137ca0;
        }
    }
    ctx->pc = 0x137C94u;
label_137c94:
    // 0x137c94: 0xc043800  jal         func_10E000
    ctx->pc = 0x137C94u;
    SET_GPR_U32(ctx, 31, 0x137C9Cu);
    ctx->pc = 0x137C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C94u;
    // 0x137c98: 0x8ea46700  lw          $a0, 0x6700($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x137C94u, 0x137C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C9Cu;
label_137c9c:
    // 0x137c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x137c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137ca0:
    // 0x137ca0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x137ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x137ca4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x137ca4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x137ca8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x137ca8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137cac: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x137cacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137cb0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x137cb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137cb4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x137cb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137cb8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x137cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137cbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x137cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x137CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CC0u;
        // 0x137cc4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137CC8u;
}
