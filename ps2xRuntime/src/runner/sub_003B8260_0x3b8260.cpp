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

// Function: sub_003B8260
// Address: 0x3b8260 - 0x3b840c
void sub_003B8260_0x3b8260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8260_0x3b8260");
#endif

    switch (ctx->pc) {
        case 0x3b82b4u: goto label_3b82b4;
        case 0x3b8308u: goto label_3b8308;
        case 0x3b8360u: goto label_3b8360;
        case 0x3b83b0u: goto label_3b83b0;
        default: break;
    }

    ctx->pc = 0x3b8260u;

    // 0x3b8260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b8260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b8264: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b8264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b8268: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b8268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b826c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b826cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b8270: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b8270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b8274: 0x90832b4d  lbu         $v1, 0x2B4D($a0)
    ctx->pc = 0x3b8274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11085)));
    // 0x3b8278: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x3B8278u;
    {
        const bool branch_taken_0x3b8278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8278u;
        // 0x3b827c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8278) {
            ctx->pc = 0x3B83A0u;
            goto label_3b83a0;
        }
    }
    ctx->pc = 0x3B8280u;
    // 0x3b8280: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b8280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b8284: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3B8284u;
    {
        const bool branch_taken_0x3b8284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8284u;
        // 0x3b8288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8284) {
            ctx->pc = 0x3B8350u;
            goto label_3b8350;
        }
    }
    ctx->pc = 0x3B828Cu;
    // 0x3b828c: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3B828Cu;
    {
        const bool branch_taken_0x3b828c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b828c) {
            ctx->pc = 0x3B82F8u;
            goto label_3b82f8;
        }
    }
    ctx->pc = 0x3B8294u;
    // 0x3b8294: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B8294u;
    {
        const bool branch_taken_0x3b8294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8294) {
            ctx->pc = 0x3B82A8u;
            goto label_3b82a8;
        }
    }
    ctx->pc = 0x3B829Cu;
    // 0x3b829c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x3B829Cu;
    {
        const bool branch_taken_0x3b829c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b829c) {
            ctx->pc = 0x3B83F0u;
            goto label_3b83f0;
        }
    }
    ctx->pc = 0x3B82A4u;
    // 0x3b82a4: 0x0  nop
    ctx->pc = 0x3b82a4u;
    // NOP
label_3b82a8:
    // 0x3b82a8: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x3b82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3b82ac: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3B82ACu;
    SET_GPR_U32(ctx, 31, 0x3B82B4u);
    ctx->pc = 0x3B82B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B82ACu;
    // 0x3b82b0: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3B82ACu, 0x3B82B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B82B4u;
label_3b82b4:
    // 0x3b82b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3b82b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b82b8: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3b82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3b82bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b82bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b82c0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3b82c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3b82c4: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3b82c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b82c8: 0x0  nop
    ctx->pc = 0x3b82c8u;
    // NOP
    // 0x3b82cc: 0x0  nop
    ctx->pc = 0x3b82ccu;
    // NOP
    // 0x3b82d0: 0x1010  mfhi        $v0
    ctx->pc = 0x3b82d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3b82d4: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x3b82d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3b82d8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3b82d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3b82dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b82dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b82e0: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x3b82e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b82e4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B82E4u;
    {
        const bool branch_taken_0x3b82e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b82e4) {
            ctx->pc = 0x3B82F8u;
            goto label_3b82f8;
        }
    }
    ctx->pc = 0x3B82ECu;
    // 0x3b82ec: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x3B82ECu;
    {
        const bool branch_taken_0x3b82ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B82ECu;
        // 0x3b82f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b82ec) {
            ctx->pc = 0x3B83F8u;
            goto label_3b83f8;
        }
    }
    ctx->pc = 0x3B82F4u;
    // 0x3b82f4: 0x0  nop
    ctx->pc = 0x3b82f4u;
    // NOP
label_3b82f8:
    // 0x3b82f8: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x3b82f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3b82fc: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x3b82fcu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b8300: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3B8300u;
    SET_GPR_U32(ctx, 31, 0x3B8308u);
    ctx->pc = 0x3B8304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8300u;
    // 0x3b8304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3B8300u, 0x3B8308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8308u;
label_3b8308:
    // 0x3b8308: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3b8308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b830c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3b830cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3b8310: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3b8310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3b8314: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3b8314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3b8318: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b8318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b831c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3b831cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b8320: 0x0  nop
    ctx->pc = 0x3b8320u;
    // NOP
    // 0x3b8324: 0x0  nop
    ctx->pc = 0x3b8324u;
    // NOP
    // 0x3b8328: 0x1010  mfhi        $v0
    ctx->pc = 0x3b8328u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3b832c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x3b832cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3b8330: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3b8330u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3b8334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b8334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b8338: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x3b8338u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b833c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B833Cu;
    {
        const bool branch_taken_0x3b833c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b833c) {
            ctx->pc = 0x3B8350u;
            goto label_3b8350;
        }
    }
    ctx->pc = 0x3B8344u;
    // 0x3b8344: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3B8344u;
    {
        const bool branch_taken_0x3b8344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8344u;
        // 0x3b8348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8344) {
            ctx->pc = 0x3B83F8u;
            goto label_3b83f8;
        }
    }
    ctx->pc = 0x3B834Cu;
    // 0x3b834c: 0x0  nop
    ctx->pc = 0x3b834cu;
    // NOP
label_3b8350:
    // 0x3b8350: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x3b8350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3b8354: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x3b8354u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b8358: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3B8358u;
    SET_GPR_U32(ctx, 31, 0x3B8360u);
    ctx->pc = 0x3B835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8358u;
    // 0x3b835c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3B8358u, 0x3B8360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8360u;
label_3b8360:
    // 0x3b8360: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3b8360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b8364: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3b8364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3b8368: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3b8368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3b836c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3b836cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3b8370: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3b8370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b8374: 0x0  nop
    ctx->pc = 0x3b8374u;
    // NOP
    // 0x3b8378: 0x0  nop
    ctx->pc = 0x3b8378u;
    // NOP
    // 0x3b837c: 0x1010  mfhi        $v0
    ctx->pc = 0x3b837cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3b8380: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x3b8380u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3b8384: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3b8384u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3b8388: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b8388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b838c: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x3b838cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b8390: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B8390u;
    {
        const bool branch_taken_0x3b8390 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8390) {
            ctx->pc = 0x3B83A0u;
            goto label_3b83a0;
        }
    }
    ctx->pc = 0x3B8398u;
    // 0x3b8398: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3B8398u;
    {
        const bool branch_taken_0x3b8398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8398u;
        // 0x3b839c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8398) {
            ctx->pc = 0x3B83F8u;
            goto label_3b83f8;
        }
    }
    ctx->pc = 0x3B83A0u;
label_3b83a0:
    // 0x3b83a0: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x3b83a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3b83a4: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x3b83a4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b83a8: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3B83A8u;
    SET_GPR_U32(ctx, 31, 0x3B83B0u);
    ctx->pc = 0x3B83ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B83A8u;
    // 0x3b83ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3B83A8u, 0x3B83B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B83B0u;
label_3b83b0:
    // 0x3b83b0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3b83b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b83b4: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3b83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3b83b8: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x3b83b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x3b83bc: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3b83bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3b83c0: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x3b83c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b83c4: 0x0  nop
    ctx->pc = 0x3b83c4u;
    // NOP
    // 0x3b83c8: 0x0  nop
    ctx->pc = 0x3b83c8u;
    // NOP
    // 0x3b83cc: 0x1010  mfhi        $v0
    ctx->pc = 0x3b83ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3b83d0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3b83d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3b83d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b83d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b83d8: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x3b83d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b83dc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B83DCu;
    {
        const bool branch_taken_0x3b83dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b83dc) {
            ctx->pc = 0x3B83F0u;
            goto label_3b83f0;
        }
    }
    ctx->pc = 0x3B83E4u;
    // 0x3b83e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B83E4u;
    {
        const bool branch_taken_0x3b83e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B83E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B83E4u;
        // 0x3b83e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b83e4) {
            ctx->pc = 0x3B83F8u;
            goto label_3b83f8;
        }
    }
    ctx->pc = 0x3B83ECu;
    // 0x3b83ec: 0x0  nop
    ctx->pc = 0x3b83ecu;
    // NOP
label_3b83f0:
    // 0x3b83f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b83f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b83f4: 0x0  nop
    ctx->pc = 0x3b83f4u;
    // NOP
label_3b83f8:
    // 0x3b83f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b83f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b83fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b83fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b8400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b8400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b8404: 0x3e00008  jr          $ra
    ctx->pc = 0x3B8404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8404u;
        // 0x3b8408: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B840Cu;
}
