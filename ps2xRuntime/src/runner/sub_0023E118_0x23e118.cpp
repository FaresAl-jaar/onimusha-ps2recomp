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

// Function: sub_0023E118
// Address: 0x23e118 - 0x23e1dc
void sub_0023E118_0x23e118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E118_0x23e118");
#endif

    switch (ctx->pc) {
        case 0x23e160u: goto label_23e160;
        case 0x23e178u: goto label_23e178;
        case 0x23e190u: goto label_23e190;
        case 0x23e1a8u: goto label_23e1a8;
        case 0x23e1c0u: goto label_23e1c0;
        case 0x23e1c8u: goto label_23e1c8;
        default: break;
    }

    ctx->pc = 0x23e118u;

    // 0x23e118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23e118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23e11c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23e11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23e120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23e120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e124: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E124u;
    {
        const bool branch_taken_0x23e124 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E124u;
        // 0x23e128: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e124) {
            ctx->pc = 0x23E148u;
            goto label_23e148;
        }
    }
    ctx->pc = 0x23E12Cu;
    // 0x23e12c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23e12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23e130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23e130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e134: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23e134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23e138: 0x2484b938  addiu       $a0, $a0, -0x46C8
    ctx->pc = 0x23e138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949176));
    // 0x23e13c: 0x808baa4  j           func_22EA90
    ctx->pc = 0x23E13Cu;
    ctx->pc = 0x23E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E13Cu;
    // 0x23e140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x23E144u;
    // 0x23e144: 0x0  nop
    ctx->pc = 0x23e144u;
    // NOP
label_23e148:
    // 0x23e148: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x23e148u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x23e14c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23e150: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E150u;
    {
        const bool branch_taken_0x23e150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E150u;
        // 0x23e154: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e150) {
            ctx->pc = 0x23E168u;
            goto label_23e168;
        }
    }
    ctx->pc = 0x23E158u;
    // 0x23e158: 0xc08f660  jal         func_23D980
    ctx->pc = 0x23E158u;
    SET_GPR_U32(ctx, 31, 0x23E160u);
    ctx->pc = 0x23D980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D980u, 0x23E158u, 0x23E160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E160u;
label_23e160:
    // 0x23e160: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23E160u;
    {
        const bool branch_taken_0x23e160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e160) {
            ctx->pc = 0x23E1C0u;
            goto label_23e1c0;
        }
    }
    ctx->pc = 0x23E168u;
label_23e168:
    // 0x23e168: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E168u;
    {
        const bool branch_taken_0x23e168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E168u;
        // 0x23e16c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e168) {
            ctx->pc = 0x23E180u;
            goto label_23e180;
        }
    }
    ctx->pc = 0x23E170u;
    // 0x23e170: 0xc08f4f6  jal         func_23D3D8
    ctx->pc = 0x23E170u;
    SET_GPR_U32(ctx, 31, 0x23E178u);
    ctx->pc = 0x23D3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3D8u, 0x23E170u, 0x23E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E178u;
label_23e178:
    // 0x23e178: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x23E178u;
    {
        const bool branch_taken_0x23e178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e178) {
            ctx->pc = 0x23E1C0u;
            goto label_23e1c0;
        }
    }
    ctx->pc = 0x23E180u;
label_23e180:
    // 0x23e180: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E180u;
    {
        const bool branch_taken_0x23e180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E180u;
        // 0x23e184: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e180) {
            ctx->pc = 0x23E198u;
            goto label_23e198;
        }
    }
    ctx->pc = 0x23E188u;
    // 0x23e188: 0xc08f600  jal         func_23D800
    ctx->pc = 0x23E188u;
    SET_GPR_U32(ctx, 31, 0x23E190u);
    ctx->pc = 0x23D800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D800u, 0x23E188u, 0x23E190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E190u;
label_23e190:
    // 0x23e190: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23E190u;
    {
        const bool branch_taken_0x23e190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e190) {
            ctx->pc = 0x23E1C0u;
            goto label_23e1c0;
        }
    }
    ctx->pc = 0x23E198u;
label_23e198:
    // 0x23e198: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E198u;
    {
        const bool branch_taken_0x23e198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E198u;
        // 0x23e19c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e198) {
            ctx->pc = 0x23E1B0u;
            goto label_23e1b0;
        }
    }
    ctx->pc = 0x23E1A0u;
    // 0x23e1a0: 0xc08f6a0  jal         func_23DA80
    ctx->pc = 0x23E1A0u;
    SET_GPR_U32(ctx, 31, 0x23E1A8u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x23E1A0u, 0x23E1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E1A8u;
label_23e1a8:
    // 0x23e1a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23E1A8u;
    {
        const bool branch_taken_0x23e1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e1a8) {
            ctx->pc = 0x23E1C0u;
            goto label_23e1c0;
        }
    }
    ctx->pc = 0x23E1B0u;
label_23e1b0:
    // 0x23e1b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E1B0u;
    {
        const bool branch_taken_0x23e1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23e1b0) {
            ctx->pc = 0x23E1C0u;
            goto label_23e1c0;
        }
    }
    ctx->pc = 0x23E1B8u;
    // 0x23e1b8: 0xc08f722  jal         func_23DC88
    ctx->pc = 0x23E1B8u;
    SET_GPR_U32(ctx, 31, 0x23E1C0u);
    ctx->pc = 0x23DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC88u, 0x23E1B8u, 0x23E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E1C0u;
label_23e1c0:
    // 0x23e1c0: 0xc08f814  jal         func_23E050
    ctx->pc = 0x23E1C0u;
    SET_GPR_U32(ctx, 31, 0x23E1C8u);
    ctx->pc = 0x23E1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1C0u;
    // 0x23e1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E050u, 0x23E1C0u, 0x23E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E1C8u;
label_23e1c8:
    // 0x23e1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e1cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23e1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23e1d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23e1d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e1d4: 0x808f7f4  j           func_23DFD0
    ctx->pc = 0x23E1D4u;
    ctx->pc = 0x23E1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E1D4u;
    // 0x23e1d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DFD0u;
    sub_0023DFD0_0x23dfd0(rdram, ctx, runtime); return;
    ctx->pc = 0x23E1DCu;
}
