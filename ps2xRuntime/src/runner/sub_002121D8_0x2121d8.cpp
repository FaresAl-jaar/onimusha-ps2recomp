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

// Function: sub_002121D8
// Address: 0x2121d8 - 0x212298
void sub_002121D8_0x2121d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002121D8_0x2121d8");
#endif

    switch (ctx->pc) {
        case 0x212204u: goto label_212204;
        case 0x212218u: goto label_212218;
        case 0x212234u: goto label_212234;
        case 0x212240u: goto label_212240;
        case 0x212248u: goto label_212248;
        case 0x212250u: goto label_212250;
        case 0x212258u: goto label_212258;
        case 0x212284u: goto label_212284;
        default: break;
    }

    ctx->pc = 0x2121d8u;

    // 0x2121d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2121d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2121dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2121dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2121e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2121e4: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x2121e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x2121e8: 0x26109fc8  addiu       $s0, $s0, -0x6038
    ctx->pc = 0x2121e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942664));
    // 0x2121ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2121ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2121f0: 0x24060089  addiu       $a2, $zero, 0x89
    ctx->pc = 0x2121f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x2121f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2121f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2121f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2121f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2121fc: 0xc07ec84  jal         func_1FB210
    ctx->pc = 0x2121FCu;
    SET_GPR_U32(ctx, 31, 0x212204u);
    ctx->pc = 0x212200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2121FCu;
    // 0x212200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB210u, 0x2121FCu, 0x212204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212204u;
label_212204:
    // 0x212204: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x212204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x212208: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x212208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x21220c: 0x24a58ab0  addiu       $a1, $a1, -0x7550
    ctx->pc = 0x21220cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937264));
    // 0x212210: 0xc07eb68  jal         func_1FADA0
    ctx->pc = 0x212210u;
    SET_GPR_U32(ctx, 31, 0x212218u);
    ctx->pc = 0x212214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212210u;
    // 0x212214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADA0u, 0x212210u, 0x212218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212218u;
label_212218:
    // 0x212218: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x212218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x21221c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x21221cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x212220: 0xb2020197  sdl         $v0, 0x197($s0)
    ctx->pc = 0x212220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x212224: 0xb6020190  sdr         $v0, 0x190($s0)
    ctx->pc = 0x212224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x212228: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x212228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
    // 0x21222c: 0xc0848d4  jal         func_212350
    ctx->pc = 0x21222Cu;
    SET_GPR_U32(ctx, 31, 0x212234u);
    ctx->pc = 0x212230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21222Cu;
    // 0x212230: 0x2604019c  addiu       $a0, $s0, 0x19C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 412));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212350u, 0x21222Cu, 0x212234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212234u;
label_212234:
    // 0x212234: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x212234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x212238: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x212238u;
    SET_GPR_U32(ctx, 31, 0x212240u);
    ctx->pc = 0x21223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212238u;
    // 0x21223c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FF30u, 0x212238u, 0x212240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212240u;
label_212240:
    // 0x212240: 0xc083b04  jal         func_20EC10
    ctx->pc = 0x212240u;
    SET_GPR_U32(ctx, 31, 0x212248u);
    ctx->pc = 0x212244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212240u;
    // 0x212244: 0x260401bc  addiu       $a0, $s0, 0x1BC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EC10u, 0x212240u, 0x212248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212248u;
label_212248:
    // 0x212248: 0xc0848a6  jal         func_212298
    ctx->pc = 0x212248u;
    SET_GPR_U32(ctx, 31, 0x212250u);
    ctx->pc = 0x21224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212248u;
    // 0x21224c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212298u, 0x212248u, 0x212250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212250u;
label_212250:
    // 0x212250: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x212250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x212254: 0x26100220  addiu       $s0, $s0, 0x220
    ctx->pc = 0x212254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
label_212258:
    // 0x212258: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x212258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21225c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x21225cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x212260: 0x0  nop
    ctx->pc = 0x212260u;
    // NOP
    // 0x212264: 0x0  nop
    ctx->pc = 0x212264u;
    // NOP
    // 0x212268: 0x0  nop
    ctx->pc = 0x212268u;
    // NOP
    // 0x21226c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21226Cu;
    {
        const bool branch_taken_0x21226c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x212270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21226Cu;
        // 0x212270: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21226c) {
            ctx->pc = 0x212258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212258;
        }
    }
    ctx->pc = 0x212274u;
    // 0x212274: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x212274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x212278: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x212278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x21227c: 0xc08870a  jal         func_221C28
    ctx->pc = 0x21227Cu;
    SET_GPR_U32(ctx, 31, 0x212284u);
    ctx->pc = 0x212280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21227Cu;
    // 0x212280: 0x2484a188  addiu       $a0, $a0, -0x5E78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C28u, 0x21227Cu, 0x212284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212284u;
label_212284:
    // 0x212284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212288: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x212288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21228c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21228cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212290: 0x3e00008  jr          $ra
    ctx->pc = 0x212290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212290u;
        // 0x212294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212298u;
}
