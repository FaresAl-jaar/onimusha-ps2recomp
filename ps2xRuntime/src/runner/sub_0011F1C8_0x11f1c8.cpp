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

// Function: sub_0011F1C8
// Address: 0x11f1c8 - 0x11f2ac
void sub_0011F1C8_0x11f1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F1C8_0x11f1c8");
#endif

    switch (ctx->pc) {
        case 0x11f238u: goto label_11f238;
        case 0x11f250u: goto label_11f250;
        case 0x11f268u: goto label_11f268;
        case 0x11f284u: goto label_11f284;
        default: break;
    }

    ctx->pc = 0x11f1c8u;

    // 0x11f1c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11f1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11f1cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f1d0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x11f1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x11f1d4: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x11f1d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x11f1d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11f1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11f1dc: 0x8e2241a8  lw          $v0, 0x41A8($s1)
    ctx->pc = 0x11f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4041A8u));
    // 0x11f1e0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x11f1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x11f1e4: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11F1E4u;
    {
        const bool branch_taken_0x11f1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1E4u;
        // 0x11f1e8: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1e4) {
            ctx->pc = 0x11F210u;
            goto label_11f210;
        }
    }
    ctx->pc = 0x11F1ECu;
    // 0x11f1ec: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x11f1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x11f1f0: 0x8e0241ac  lw          $v0, 0x41AC($s0)
    ctx->pc = 0x11f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4041ACu));
    // 0x11f1f4: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11F1F4u;
    {
        const bool branch_taken_0x11f1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1F4u;
        // 0x11f1f8: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1f4) {
            ctx->pc = 0x11F214u;
            goto label_11f214;
        }
    }
    ctx->pc = 0x11F1FCu;
    // 0x11f1fc: 0x8e4241b0  lw          $v0, 0x41B0($s2)
    ctx->pc = 0x11f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16816)));
    // 0x11f200: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x11F200u;
    {
        const bool branch_taken_0x11f200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F200u;
        // 0x11f204: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f200) {
            ctx->pc = 0x11F298u;
            goto label_11f298;
        }
    }
    ctx->pc = 0x11F208u;
    // 0x11f208: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11F208u;
    {
        const bool branch_taken_0x11f208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F208u;
        // 0x11f20c: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f208) {
            ctx->pc = 0x11F21Cu;
            goto label_11f21c;
        }
    }
    ctx->pc = 0x11F210u;
label_11f210:
    // 0x11f210: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x11f210u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_11f214:
    // 0x11f214: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x11f214u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x11f218: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x11f218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_11f21c:
    // 0x11f21c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f220: 0x24423710  addiu       $v0, $v0, 0x3710
    ctx->pc = 0x11f220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14096));
    // 0x11f224: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x11f224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x11f228: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x11f228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11f22c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11f22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f230: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x11F230u;
    SET_GPR_U32(ctx, 31, 0x11F238u);
    ctx->pc = 0x11F234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F230u;
    // 0x11f234: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x11F230u, 0x11F238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F238u;
label_11f238:
    // 0x11f238: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x11f238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x11f23c: 0xae2241a8  sw          $v0, 0x41A8($s1)
    ctx->pc = 0x11f23cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16808), GPR_U32(ctx, 2));
    // 0x11f240: 0x24633720  addiu       $v1, $v1, 0x3720
    ctx->pc = 0x11f240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14112));
    // 0x11f244: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11f244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f248: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x11F248u;
    SET_GPR_U32(ctx, 31, 0x11F250u);
    ctx->pc = 0x11F24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F248u;
    // 0x11f24c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x11F248u, 0x11F250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F250u;
label_11f250:
    // 0x11f250: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x11f250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x11f254: 0xae0241ac  sw          $v0, 0x41AC($s0)
    ctx->pc = 0x11f254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16812), GPR_U32(ctx, 2));
    // 0x11f258: 0x24633730  addiu       $v1, $v1, 0x3730
    ctx->pc = 0x11f258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14128));
    // 0x11f25c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11f25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f260: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x11F260u;
    SET_GPR_U32(ctx, 31, 0x11F268u);
    ctx->pc = 0x11F264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F260u;
    // 0x11f264: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x11F260u, 0x11F268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F268u;
label_11f268:
    // 0x11f268: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x11f268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x11f26c: 0xae4241b0  sw          $v0, 0x41B0($s2)
    ctx->pc = 0x11f26cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16816), GPR_U32(ctx, 2));
    // 0x11f270: 0x24633740  addiu       $v1, $v1, 0x3740
    ctx->pc = 0x11f270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14144));
    // 0x11f274: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11f274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f278: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x11f278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x11f27c: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x11F27Cu;
    SET_GPR_U32(ctx, 31, 0x11F284u);
    ctx->pc = 0x11F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F27Cu;
    // 0x11f280: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x11F27Cu, 0x11F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F284u;
label_11f284:
    // 0x11f284: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x11f284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x11f288: 0xac6241a0  sw          $v0, 0x41A0($v1)
    ctx->pc = 0x11f288u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4041A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4041A0u, _value); } while (0);
    // 0x11f28c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x11f290: 0xac4041b4  sw          $zero, 0x41B4($v0)
    ctx->pc = 0x11f290u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4041B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4041B4u, _value); } while (0);
    // 0x11f294: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11f294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_11f298:
    // 0x11f298: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x11f298u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f29c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x11f29cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f2a0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11f2a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x11F2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2A4u;
        // 0x11f2a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F2ACu;
}
