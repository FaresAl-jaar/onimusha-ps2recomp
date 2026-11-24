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

// Function: sub_00276410
// Address: 0x276410 - 0x2764ac
void sub_00276410_0x276410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276410_0x276410");
#endif

    switch (ctx->pc) {
        case 0x276460u: goto label_276460;
        default: break;
    }

    ctx->pc = 0x276410u;

    // 0x276410: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x276410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x276414: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x276414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x276418: 0xac2008f0  sw          $zero, 0x8F0($at)
    ctx->pc = 0x276418u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8C08F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8C08F0u, _value); } while (0);
    // 0x27641c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27641cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276420: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x276420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x276424: 0x24840910  addiu       $a0, $a0, 0x910
    ctx->pc = 0x276424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2320));
    // 0x276428: 0xac2008f4  sw          $zero, 0x8F4($at)
    ctx->pc = 0x276428u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8C08F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8C08F4u, _value); } while (0);
    // 0x27642c: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x27642cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x276430: 0xac2008f8  sw          $zero, 0x8F8($at)
    ctx->pc = 0x276430u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8C08F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8C08F8u, _value); } while (0);
    // 0x276434: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x276434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x276438: 0xac2008fc  sw          $zero, 0x8FC($at)
    ctx->pc = 0x276438u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8C08FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8C08FCu, _value); } while (0);
    // 0x27643c: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x27643cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x276440: 0xac200900  sw          $zero, 0x900($at)
    ctx->pc = 0x276440u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8C0900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8C0900u, _value); } while (0);
    // 0x276444: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x276444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x276448: 0xac200904  sw          $zero, 0x904($at)
    ctx->pc = 0x276448u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8C0904u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8C0904u, _value); } while (0);
    // 0x27644c: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x27644cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x276450: 0xac200908  sw          $zero, 0x908($at)
    ctx->pc = 0x276450u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8C0908u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8C0908u, _value); } while (0);
    // 0x276454: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x276454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x276458: 0xac20090c  sw          $zero, 0x90C($at)
    ctx->pc = 0x276458u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8C090Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8C090Cu, _value); } while (0);
    // 0x27645c: 0x0  nop
    ctx->pc = 0x27645cu;
    // NOP
label_276460:
    // 0x276460: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x276460u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x276464: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x276464u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x276468: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x276468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x27646c: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x27646cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x276470: 0x28a3000c  slti        $v1, $a1, 0xC
    ctx->pc = 0x276470u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x276474: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x276474u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x276478: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x276478u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x27647c: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x27647cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x276480: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x276480u;
    {
        const bool branch_taken_0x276480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276480u;
        // 0x276484: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276480) {
            ctx->pc = 0x276460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276460;
        }
    }
    ctx->pc = 0x276488u;
    // 0x276488: 0x3c037654  lui         $v1, 0x7654
    ctx->pc = 0x276488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30292 << 16));
    // 0x27648c: 0xaf808904  sw          $zero, -0x76FC($gp)
    ctx->pc = 0x27648cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936836), GPR_U32(ctx, 0));
    // 0x276490: 0x34633210  ori         $v1, $v1, 0x3210
    ctx->pc = 0x276490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12816);
    // 0x276494: 0xaf808900  sw          $zero, -0x7700($gp)
    ctx->pc = 0x276494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936832), GPR_U32(ctx, 0));
    // 0x276498: 0xaf838908  sw          $v1, -0x76F8($gp)
    ctx->pc = 0x276498u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 3));
    // 0x27649c: 0xaf80890c  sw          $zero, -0x76F4($gp)
    ctx->pc = 0x27649cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936844), GPR_U32(ctx, 0));
    // 0x2764a0: 0xaf808910  sw          $zero, -0x76F0($gp)
    ctx->pc = 0x2764a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936848), GPR_U32(ctx, 0));
    // 0x2764a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2764A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2764A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2764A4u;
        // 0x2764a8: 0xaf808914  sw          $zero, -0x76EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936852), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2764A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2764ACu;
}
