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

// Function: sub_00119FF8
// Address: 0x119ff8 - 0x11a070
void sub_00119FF8_0x119ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119FF8_0x119ff8");
#endif

    switch (ctx->pc) {
        case 0x11a03cu: goto label_11a03c;
        default: break;
    }

    ctx->pc = 0x119ff8u;

    // 0x119ff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119ffc: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x119ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x11a000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a008: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A008u;
    {
        const bool branch_taken_0x11a008 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x11A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A008u;
        // 0x11a00c: 0x28100  sll         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a008) {
            ctx->pc = 0x11A024u;
            goto label_11a024;
        }
    }
    ctx->pc = 0x11A010u;
    // 0x11a010: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x11a010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11a014: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x11a014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x11a018: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a01c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A01Cu;
    {
        const bool branch_taken_0x11a01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a01c) {
            ctx->pc = 0x11A030u;
            goto label_11a030;
        }
    }
    ctx->pc = 0x11A024u;
label_11a024:
    // 0x11a024: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11a024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11a028: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11A028u;
    {
        const bool branch_taken_0x11a028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A028u;
        // 0x11a02c: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a028) {
            ctx->pc = 0x11A060u;
            goto label_11a060;
        }
    }
    ctx->pc = 0x11A030u;
label_11a030:
    // 0x11a030: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x11a030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11a034: 0xc0464e0  jal         func_119380
    ctx->pc = 0x11A034u;
    SET_GPR_U32(ctx, 31, 0x11A03Cu);
    ctx->pc = 0x119380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119380u, 0x11A034u, 0x11A03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A03Cu;
label_11a03c:
    // 0x11a03c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a040: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A040u;
    {
        const bool branch_taken_0x11a040 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A040u;
        // 0x11a044: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a040) {
            ctx->pc = 0x11A060u;
            goto label_11a060;
        }
    }
    ctx->pc = 0x11A048u;
    // 0x11a048: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11a048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x11a04c: 0x8c433f40  lw          $v1, 0x3F40($v0)
    ctx->pc = 0x11a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x693F40u));
    // 0x11a050: 0xac503f40  sw          $s0, 0x3F40($v0)
    ctx->pc = 0x11a050u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x693F40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x693F40u, _value); } while (0);
    // 0x11a054: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x11a054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x11a058: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11a058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11a05c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11a05cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11a060:
    // 0x11a060: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a068: 0x3e00008  jr          $ra
    ctx->pc = 0x11A068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A068u;
        // 0x11a06c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A070u;
}
