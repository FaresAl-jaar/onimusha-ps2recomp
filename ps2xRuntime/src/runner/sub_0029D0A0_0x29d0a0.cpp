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

// Function: sub_0029D0A0
// Address: 0x29d0a0 - 0x29d13c
void sub_0029D0A0_0x29d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D0A0_0x29d0a0");
#endif

    switch (ctx->pc) {
        case 0x29d0a0u: goto label_29d0a0;
        case 0x29d0a4u: goto label_29d0a4;
        case 0x29d0a8u: goto label_29d0a8;
        case 0x29d0acu: goto label_29d0ac;
        case 0x29d0b0u: goto label_29d0b0;
        case 0x29d0b4u: goto label_29d0b4;
        case 0x29d0b8u: goto label_29d0b8;
        case 0x29d0bcu: goto label_29d0bc;
        case 0x29d0c0u: goto label_29d0c0;
        case 0x29d0c4u: goto label_29d0c4;
        case 0x29d0c8u: goto label_29d0c8;
        case 0x29d0ccu: goto label_29d0cc;
        case 0x29d0d0u: goto label_29d0d0;
        case 0x29d0d4u: goto label_29d0d4;
        case 0x29d0d8u: goto label_29d0d8;
        case 0x29d0dcu: goto label_29d0dc;
        case 0x29d0e0u: goto label_29d0e0;
        case 0x29d0e4u: goto label_29d0e4;
        case 0x29d0e8u: goto label_29d0e8;
        case 0x29d0ecu: goto label_29d0ec;
        case 0x29d0f0u: goto label_29d0f0;
        case 0x29d0f4u: goto label_29d0f4;
        case 0x29d0f8u: goto label_29d0f8;
        case 0x29d0fcu: goto label_29d0fc;
        case 0x29d100u: goto label_29d100;
        case 0x29d104u: goto label_29d104;
        case 0x29d108u: goto label_29d108;
        case 0x29d10cu: goto label_29d10c;
        case 0x29d110u: goto label_29d110;
        case 0x29d114u: goto label_29d114;
        case 0x29d118u: goto label_29d118;
        case 0x29d11cu: goto label_29d11c;
        case 0x29d120u: goto label_29d120;
        case 0x29d124u: goto label_29d124;
        case 0x29d128u: goto label_29d128;
        case 0x29d12cu: goto label_29d12c;
        case 0x29d130u: goto label_29d130;
        case 0x29d134u: goto label_29d134;
        case 0x29d138u: goto label_29d138;
        default: break;
    }

    ctx->pc = 0x29d0a0u;

label_29d0a0:
    // 0x29d0a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29d0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29d0a4:
    // 0x29d0a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29d0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29d0a8:
    // 0x29d0a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29d0ac:
    // 0x29d0ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29d0b0:
    // 0x29d0b0: 0x8c830124  lw          $v1, 0x124($a0)
    ctx->pc = 0x29d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
label_29d0b4:
    // 0x29d0b4: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_29d0b8:
    if (ctx->pc == 0x29D0B8u) {
        ctx->pc = 0x29D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0B4u;
        // 0x29d0b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D0BCu;
        goto label_29d0bc;
    }
    ctx->pc = 0x29D0B4u;
    {
        const bool branch_taken_0x29d0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0B4u;
        // 0x29d0b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d0b4) {
            ctx->pc = 0x29D128u;
            goto label_29d128;
        }
    }
    ctx->pc = 0x29D0BCu;
label_29d0bc:
    // 0x29d0bc: 0x8e2400d0  lw          $a0, 0xD0($s1)
    ctx->pc = 0x29d0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_29d0c0:
    // 0x29d0c0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x29d0c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_29d0c4:
    // 0x29d0c4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_29d0c8:
    if (ctx->pc == 0x29D0C8u) {
        ctx->pc = 0x29D0CCu;
        goto label_29d0cc;
    }
    ctx->pc = 0x29D0C4u;
    {
        const bool branch_taken_0x29d0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d0c4) {
            ctx->pc = 0x29D128u;
            goto label_29d128;
        }
    }
    ctx->pc = 0x29D0CCu;
label_29d0cc:
    // 0x29d0cc: 0x0  nop
    ctx->pc = 0x29d0ccu;
    // NOP
label_29d0d0:
    // 0x29d0d0: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x29d0d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
label_29d0d4:
    // 0x29d0d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_29d0d8:
    if (ctx->pc == 0x29D0D8u) {
        ctx->pc = 0x29D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0D4u;
        // 0x29d0d8: 0x8c900010  lw          $s0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D0DCu;
        goto label_29d0dc;
    }
    ctx->pc = 0x29D0D4u;
    {
        const bool branch_taken_0x29d0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0D4u;
        // 0x29d0d8: 0x8c900010  lw          $s0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d0d4) {
            ctx->pc = 0x29D0E8u;
            goto label_29d0e8;
        }
    }
    ctx->pc = 0x29D0DCu;
label_29d0dc:
    // 0x29d0dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29d0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_29d0e0:
    // 0x29d0e0: 0x1000000d  b           . + 4 + (0xD << 2)
label_29d0e4:
    if (ctx->pc == 0x29D0E4u) {
        ctx->pc = 0x29D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0E0u;
        // 0x29d0e4: 0xa0830009  sb          $v1, 0x9($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D0E8u;
        goto label_29d0e8;
    }
    ctx->pc = 0x29D0E0u;
    {
        const bool branch_taken_0x29d0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0E0u;
        // 0x29d0e4: 0xa0830009  sb          $v1, 0x9($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d0e0) {
            ctx->pc = 0x29D118u;
            goto label_29d118;
        }
    }
    ctx->pc = 0x29D0E8u;
label_29d0e8:
    // 0x29d0e8: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x29d0e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_29d0ec:
    // 0x29d0ec: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_29d0f0:
    if (ctx->pc == 0x29D0F0u) {
        ctx->pc = 0x29D0F4u;
        goto label_29d0f4;
    }
    ctx->pc = 0x29D0ECu;
    {
        const bool branch_taken_0x29d0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d0ec) {
            ctx->pc = 0x29D118u;
            goto label_29d118;
        }
    }
    ctx->pc = 0x29D0F4u;
label_29d0f4:
    // 0x29d0f4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x29d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_29d0f8:
    // 0x29d0f8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x29d0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_29d0fc:
    // 0x29d0fc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x29d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_29d100:
    // 0x29d100: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x29d100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_29d104:
    // 0x29d104: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x29d104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_29d108:
    // 0x29d108: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x29d108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_29d10c:
    // 0x29d10c: 0x40f809  jalr        $v0
label_29d110:
    if (ctx->pc == 0x29D110u) {
        ctx->pc = 0x29D114u;
        goto label_29d114;
    }
    ctx->pc = 0x29D10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29D114u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D10Cu, 0x29D114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D114u;
label_29d114:
    // 0x29d114: 0x0  nop
    ctx->pc = 0x29d114u;
    // NOP
label_29d118:
    // 0x29d118: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29d118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_29d11c:
    // 0x29d11c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_29d120:
    if (ctx->pc == 0x29D120u) {
        ctx->pc = 0x29D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D11Cu;
        // 0x29d120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D124u;
        goto label_29d124;
    }
    ctx->pc = 0x29D11Cu;
    {
        const bool branch_taken_0x29d11c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D11Cu;
        // 0x29d120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d11c) {
            ctx->pc = 0x29D0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d0d0;
        }
    }
    ctx->pc = 0x29D124u;
label_29d124:
    // 0x29d124: 0x0  nop
    ctx->pc = 0x29d124u;
    // NOP
label_29d128:
    // 0x29d128: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29d128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29d12c:
    // 0x29d12c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d12cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29d130:
    // 0x29d130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29d134:
    // 0x29d134: 0x3e00008  jr          $ra
label_29d138:
    if (ctx->pc == 0x29D138u) {
        ctx->pc = 0x29D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D134u;
        // 0x29d138: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D13Cu;
        goto label_fallthrough_0x29d134;
    }
    ctx->pc = 0x29D134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D134u;
        // 0x29d138: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29d134:
    ctx->pc = 0x29D13Cu;
}
