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

// Function: sub_00203E38
// Address: 0x203e38 - 0x203ee0
void sub_00203E38_0x203e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203E38_0x203e38");
#endif

    switch (ctx->pc) {
        case 0x203e6cu: goto label_203e6c;
        case 0x203e94u: goto label_203e94;
        case 0x203ea8u: goto label_203ea8;
        case 0x203ec8u: goto label_203ec8;
        default: break;
    }

    ctx->pc = 0x203e38u;

    // 0x203e38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203e3c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x203e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203e40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x203e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x203e44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x203e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203e48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203e4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x203e50: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x203e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x203e54: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x203e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x203e58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x203E58u;
    {
        const bool branch_taken_0x203e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E58u;
        // 0x203e5c: 0x262301ec  addiu       $v1, $s1, 0x1EC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 492));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e58) {
            ctx->pc = 0x203E78u;
            goto label_203e78;
        }
    }
    ctx->pc = 0x203E60u;
    // 0x203e60: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x203e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x203e64: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x203E64u;
    SET_GPR_U32(ctx, 31, 0x203E6Cu);
    ctx->pc = 0x203E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203E64u;
    // 0x203e68: 0x24846a98  addiu       $a0, $a0, 0x6A98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x203E64u, 0x203E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203E6Cu;
label_203e6c:
    // 0x203e6c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x203E6Cu;
    {
        const bool branch_taken_0x203e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E6Cu;
        // 0x203e70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e6c) {
            ctx->pc = 0x203ECCu;
            goto label_203ecc;
        }
    }
    ctx->pc = 0x203E74u;
    // 0x203e74: 0x0  nop
    ctx->pc = 0x203e74u;
    // NOP
label_203e78:
    // 0x203e78: 0x4c00014  bltz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x203E78u;
    {
        const bool branch_taken_0x203e78 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x203E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E78u;
        // 0x203e7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e78) {
            ctx->pc = 0x203ECCu;
            goto label_203ecc;
        }
    }
    ctx->pc = 0x203E80u;
    // 0x203e80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x203e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203e84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203E84u;
    {
        const bool branch_taken_0x203e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203e84) {
            ctx->pc = 0x203EA0u;
            goto label_203ea0;
        }
    }
    ctx->pc = 0x203E8Cu;
    // 0x203e8c: 0xc080fb8  jal         func_203EE0
    ctx->pc = 0x203E8Cu;
    SET_GPR_U32(ctx, 31, 0x203E94u);
    ctx->pc = 0x203EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203EE0u, 0x203E8Cu, 0x203E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203E94u;
label_203e94:
    // 0x203e94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x203E94u;
    {
        const bool branch_taken_0x203e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E94u;
        // 0x203e98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e94) {
            ctx->pc = 0x203EACu;
            goto label_203eac;
        }
    }
    ctx->pc = 0x203E9Cu;
    // 0x203e9c: 0x0  nop
    ctx->pc = 0x203e9cu;
    // NOP
label_203ea0:
    // 0x203ea0: 0xc080fc6  jal         func_203F18
    ctx->pc = 0x203EA0u;
    SET_GPR_U32(ctx, 31, 0x203EA8u);
    ctx->pc = 0x203EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203EA0u;
    // 0x203ea4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F18u, 0x203EA0u, 0x203EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203EA8u;
label_203ea8:
    // 0x203ea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x203ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203eac:
    // 0x203eac: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203EACu;
    {
        const bool branch_taken_0x203eac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x203EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203EACu;
        // 0x203eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203eac) {
            ctx->pc = 0x203EC8u;
            goto label_203ec8;
        }
    }
    ctx->pc = 0x203EB4u;
    // 0x203eb4: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x203eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x203eb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x203eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x203ebc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x203ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x203ec0: 0xc081010  jal         func_204040
    ctx->pc = 0x203EC0u;
    SET_GPR_U32(ctx, 31, 0x203EC8u);
    ctx->pc = 0x203EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203EC0u;
    // 0x203ec4: 0xac500204  sw          $s0, 0x204($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 516), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204040u, 0x203EC0u, 0x203EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203EC8u;
label_203ec8:
    // 0x203ec8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x203ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203ecc:
    // 0x203ecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203ed0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x203ed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203ed4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x203ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203ED8u;
        // 0x203edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203EE0u;
}
