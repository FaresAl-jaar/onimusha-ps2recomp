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

// Function: sub_003E2F60
// Address: 0x3e2f60 - 0x3e30f8
void sub_003E2F60_0x3e2f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2F60_0x3e2f60");
#endif

    switch (ctx->pc) {
        case 0x3e2fa4u: goto label_3e2fa4;
        case 0x3e2fb4u: goto label_3e2fb4;
        case 0x3e2fc0u: goto label_3e2fc0;
        case 0x3e2fd4u: goto label_3e2fd4;
        case 0x3e2fe8u: goto label_3e2fe8;
        case 0x3e2ffcu: goto label_3e2ffc;
        case 0x3e3010u: goto label_3e3010;
        case 0x3e3024u: goto label_3e3024;
        case 0x3e3038u: goto label_3e3038;
        case 0x3e304cu: goto label_3e304c;
        case 0x3e3060u: goto label_3e3060;
        default: break;
    }

    ctx->pc = 0x3e2f60u;

    // 0x3e2f60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e2f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e2f64: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x3e2f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3e2f68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e2f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3e2f6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e2f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e2f70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e2f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e2f74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3e2f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3e2f78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e2f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e2f7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e2f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e2f80: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x3e2f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3e2f84: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3e2f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3e2f88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E2F88u;
    {
        const bool branch_taken_0x3e2f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F88u;
        // 0x3e2f8c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2f88) {
            ctx->pc = 0x3E2F98u;
            goto label_3e2f98;
        }
    }
    ctx->pc = 0x3E2F90u;
    // 0x3e2f90: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3E2F90u;
    {
        const bool branch_taken_0x3e2f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2f90) {
            ctx->pc = 0x3E30E0u;
            goto label_3e30e0;
        }
    }
    ctx->pc = 0x3E2F98u;
label_3e2f98:
    // 0x3e2f98: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3e2f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3e2f9c: 0xc0969d8  jal         func_25A760
    ctx->pc = 0x3E2F9Cu;
    SET_GPR_U32(ctx, 31, 0x3E2FA4u);
    ctx->pc = 0x3E2FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2F9Cu;
    // 0x3e2fa0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A760u, 0x3E2F9Cu, 0x3E2FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2FA4u;
label_3e2fa4:
    // 0x3e2fa4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e2fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e2fa8: 0x24042328  addiu       $a0, $zero, 0x2328
    ctx->pc = 0x3e2fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9000));
    // 0x3e2fac: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x3E2FACu;
    SET_GPR_U32(ctx, 31, 0x3E2FB4u);
    ctx->pc = 0x3E2FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2FACu;
    // 0x3e2fb0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x3E2FACu, 0x3E2FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2FB4u;
label_3e2fb4:
    // 0x3e2fb4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x3e2fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3e2fb8: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x3E2FB8u;
    SET_GPR_U32(ctx, 31, 0x3E2FC0u);
    ctx->pc = 0x3E2FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2FB8u;
    // 0x3e2fbc: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x3E2FB8u, 0x3E2FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2FC0u;
label_3e2fc0:
    // 0x3e2fc0: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x3e2fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x3e2fc4: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x3e2fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3e2fc8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3e2fc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e2fcc: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x3E2FCCu;
    SET_GPR_U32(ctx, 31, 0x3E2FD4u);
    ctx->pc = 0x3E2FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2FCCu;
    // 0x3e2fd0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x3E2FCCu, 0x3E2FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2FD4u;
label_3e2fd4:
    // 0x3e2fd4: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x3e2fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x3e2fd8: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x3e2fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3e2fdc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3e2fdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e2fe0: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x3E2FE0u;
    SET_GPR_U32(ctx, 31, 0x3E2FE8u);
    ctx->pc = 0x3E2FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2FE0u;
    // 0x3e2fe4: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x3E2FE0u, 0x3E2FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2FE8u;
label_3e2fe8:
    // 0x3e2fe8: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x3e2fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x3e2fec: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x3e2fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3e2ff0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3e2ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e2ff4: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x3E2FF4u;
    SET_GPR_U32(ctx, 31, 0x3E2FFCu);
    ctx->pc = 0x3E2FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2FF4u;
    // 0x3e2ff8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x3E2FF4u, 0x3E2FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2FFCu;
label_3e2ffc:
    // 0x3e2ffc: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x3e2ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x3e3000: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x3e3000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3e3004: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3e3004u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e3008: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x3E3008u;
    SET_GPR_U32(ctx, 31, 0x3E3010u);
    ctx->pc = 0x3E300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3008u;
    // 0x3e300c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x3E3008u, 0x3E3010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3010u;
label_3e3010:
    // 0x3e3010: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x3e3010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x3e3014: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x3e3014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3e3018: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3e3018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e301c: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x3E301Cu;
    SET_GPR_U32(ctx, 31, 0x3E3024u);
    ctx->pc = 0x3E3020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E301Cu;
    // 0x3e3020: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x3E301Cu, 0x3E3024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3024u;
label_3e3024:
    // 0x3e3024: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x3e3024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x3e3028: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x3e3028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3e302c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3e302cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e3030: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x3E3030u;
    SET_GPR_U32(ctx, 31, 0x3E3038u);
    ctx->pc = 0x3E3034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3030u;
    // 0x3e3034: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x3E3030u, 0x3E3038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3038u;
label_3e3038:
    // 0x3e3038: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x3e3038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x3e303c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x3e303cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3e3040: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3e3040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e3044: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x3E3044u;
    SET_GPR_U32(ctx, 31, 0x3E304Cu);
    ctx->pc = 0x3E3048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3044u;
    // 0x3e3048: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x3E3044u, 0x3E304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E304Cu;
label_3e304c:
    // 0x3e304c: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x3e304cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x3e3050: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x3e3050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3e3054: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3e3054u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e3058: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x3E3058u;
    SET_GPR_U32(ctx, 31, 0x3E3060u);
    ctx->pc = 0x3E305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3058u;
    // 0x3e305c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x3E3058u, 0x3E3060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3060u;
label_3e3060:
    // 0x3e3060: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x3e3060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x3e3064: 0x3c010098  lui         $at, 0x98
    ctx->pc = 0x3e3064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)152 << 16));
    // 0x3e3068: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3e3068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e306c: 0x34219680  ori         $at, $at, 0x9680
    ctx->pc = 0x3e306cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38528);
    // 0x3e3070: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x3e3070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3e3074: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x3e3074u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x3e3078: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E3078u;
    {
        const bool branch_taken_0x3e3078 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3078) {
            ctx->pc = 0x3E3088u;
            goto label_3e3088;
        }
    }
    ctx->pc = 0x3E3080u;
    // 0x3e3080: 0x3c020098  lui         $v0, 0x98
    ctx->pc = 0x3e3080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)152 << 16));
    // 0x3e3084: 0x3451967f  ori         $s1, $v0, 0x967F
    ctx->pc = 0x3e3084u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38527);
label_3e3088:
    // 0x3e3088: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x3e3088u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3e308c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3e308cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3e3090: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3e3090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3e3094: 0x34647777  ori         $a0, $v1, 0x7777
    ctx->pc = 0x3e3094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30583);
    // 0x3e3098: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3e3098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e309c: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x3e309cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x3e30a0: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x3e30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x3e30a4: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x3e30a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x3e30a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e30a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3e30ac: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x3e30acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x3e30b0: 0x51082  srl         $v0, $a1, 2
    ctx->pc = 0x3e30b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x3e30b4: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x3e30b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x3e30b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e30b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3e30bc: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x3e30bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x3e30c0: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x3e30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x3e30c4: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x3e30c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x3e30c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e30c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3e30cc: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x3e30ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x3e30d0: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x3e30d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3e30d4: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x3e30d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x3e30d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3e30d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e30dc: 0x0  nop
    ctx->pc = 0x3e30dcu;
    // NOP
label_3e30e0:
    // 0x3e30e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e30e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e30e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e30e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e30e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e30e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e30ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e30ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e30f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E30F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E30F0u;
        // 0x3e30f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E30F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E30F8u;
}
