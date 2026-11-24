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

// Function: sub_0024F228
// Address: 0x24f228 - 0x24f2a4
void sub_0024F228_0x24f228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F228_0x24f228");
#endif

    switch (ctx->pc) {
        case 0x24f274u: goto label_24f274;
        default: break;
    }

    ctx->pc = 0x24f228u;

    // 0x24f228: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f22c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24f22cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24f230: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f230u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24f234: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24f234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f238: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x24f238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x24f23c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24f23cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f240: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x24f240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x24f244: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F244u;
    {
        const bool branch_taken_0x24f244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x24F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F244u;
        // 0x24f248: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f244) {
            ctx->pc = 0x24F25Cu;
            goto label_24f25c;
        }
    }
    ctx->pc = 0x24F24Cu;
    // 0x24f24c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f250: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24f250u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24f254: 0x58600010  blezl       $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x24F254u;
    {
        const bool branch_taken_0x24f254 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x24f254) {
            ctx->pc = 0x24F258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F254u;
            // 0x24f258: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F298u;
            goto label_24f298;
        }
    }
    ctx->pc = 0x24F25Cu;
label_24f25c:
    // 0x24f25c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x24f25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24f260: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24f260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f264: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x24f264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f268: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x24f268u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24f26c: 0xc091ee6  jal         func_247B98
    ctx->pc = 0x24F26Cu;
    SET_GPR_U32(ctx, 31, 0x24F274u);
    ctx->pc = 0x24F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F26Cu;
    // 0x24f270: 0xafb00010  sw          $s0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x24F26Cu, 0x24F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F274u;
label_24f274:
    // 0x24f274: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x24f274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f278: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24f278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24f27c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x24f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24f280: 0x24637510  addiu       $v1, $v1, 0x7510
    ctx->pc = 0x24f280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29968));
    // 0x24f284: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f288: 0xac507504  sw          $s0, 0x7504($v0)
    ctx->pc = 0x24f288u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x4D7504u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D7504u, _value); } while (0);
    // 0x24f28c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x24f28cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4D7514u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D7514u, _value); } while (0);
    // 0x24f290: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x24f290u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x4D7510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D7510u, _value); } while (0);
    // 0x24f294: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24f294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24f298:
    // 0x24f298: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x24f298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f29c: 0x3e00008  jr          $ra
    ctx->pc = 0x24F29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F29Cu;
        // 0x24f2a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F2A4u;
}
