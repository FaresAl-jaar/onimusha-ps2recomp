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

// Function: sub_002122A8
// Address: 0x2122a8 - 0x21234c
void sub_002122A8_0x2122a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002122A8_0x2122a8");
#endif

    switch (ctx->pc) {
        case 0x2122d0u: goto label_2122d0;
        case 0x2122e4u: goto label_2122e4;
        case 0x212304u: goto label_212304;
        case 0x21230cu: goto label_21230c;
        case 0x212314u: goto label_212314;
        case 0x21231cu: goto label_21231c;
        case 0x212324u: goto label_212324;
        case 0x21232cu: goto label_21232c;
        default: break;
    }

    ctx->pc = 0x2122a8u;

    // 0x2122a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2122a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2122ac: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2122acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2122b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2122b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2122b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2122b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2122b8: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x2122b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2122bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2122bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2122c0: 0x2451a1cc  addiu       $s1, $v0, -0x5E34
    ctx->pc = 0x2122c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943180));
    // 0x2122c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2122c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2122c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2122c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2122cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2122ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BA1CCu));
label_2122d0:
    // 0x2122d0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2122d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2122d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2122D4u;
    {
        const bool branch_taken_0x2122d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2122D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2122D4u;
        // 0x2122d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2122d4) {
            ctx->pc = 0x2122E8u;
            goto label_2122e8;
        }
    }
    ctx->pc = 0x2122DCu;
    // 0x2122dc: 0xc087624  jal         func_21D890
    ctx->pc = 0x2122DCu;
    SET_GPR_U32(ctx, 31, 0x2122E4u);
    ctx->pc = 0x21D890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D890u, 0x2122DCu, 0x2122E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2122E4u;
label_2122e4:
    // 0x2122e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2122e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2122e8:
    // 0x2122e8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2122e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2122ec: 0x603fff8  bgezl       $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2122ECu;
    {
        const bool branch_taken_0x2122ec = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x2122ec) {
            ctx->pc = 0x2122F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2122ECu;
            // 0x2122f0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2122D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2122d0;
        }
    }
    ctx->pc = 0x2122F4u;
    // 0x2122f4: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x2122f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x2122f8: 0x2610a178  addiu       $s0, $s0, -0x5E88
    ctx->pc = 0x2122f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943096));
    // 0x2122fc: 0xc087fd0  jal         func_21FF40
    ctx->pc = 0x2122FCu;
    SET_GPR_U32(ctx, 31, 0x212304u);
    ctx->pc = 0x212300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2122FCu;
    // 0x212300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FF40u, 0x2122FCu, 0x212304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212304u;
label_212304:
    // 0x212304: 0xc083b0a  jal         func_20EC28
    ctx->pc = 0x212304u;
    SET_GPR_U32(ctx, 31, 0x21230Cu);
    ctx->pc = 0x212308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212304u;
    // 0x212308: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EC28u, 0x212304u, 0x21230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21230Cu;
label_21230c:
    // 0x21230c: 0xc088730  jal         func_221CC0
    ctx->pc = 0x21230Cu;
    SET_GPR_U32(ctx, 31, 0x212314u);
    ctx->pc = 0x212310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21230Cu;
    // 0x212310: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221CC0u, 0x21230Cu, 0x212314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212314u;
label_212314:
    // 0x212314: 0xc08498e  jal         func_212638
    ctx->pc = 0x212314u;
    SET_GPR_U32(ctx, 31, 0x21231Cu);
    ctx->pc = 0x212318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212314u;
    // 0x212318: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212638u, 0x212314u, 0x21231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21231Cu;
label_21231c:
    // 0x21231c: 0xc084986  jal         func_212618
    ctx->pc = 0x21231Cu;
    SET_GPR_U32(ctx, 31, 0x212324u);
    ctx->pc = 0x212618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212618u, 0x21231Cu, 0x212324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212324u;
label_212324:
    // 0x212324: 0xc084978  jal         func_2125E0
    ctx->pc = 0x212324u;
    SET_GPR_U32(ctx, 31, 0x21232Cu);
    ctx->pc = 0x2125E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125E0u, 0x212324u, 0x21232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21232Cu;
label_21232c:
    // 0x21232c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21232cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212330: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x212330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212334: 0x250100a  movz        $v0, $s2, $s0
    ctx->pc = 0x212334u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x212338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21233c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21233cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212340: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x212340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212344: 0x3e00008  jr          $ra
    ctx->pc = 0x212344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212344u;
        // 0x212348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21234Cu;
}
