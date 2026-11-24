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

// Function: sub_002CF380
// Address: 0x2cf380 - 0x2cf7c8
void sub_002CF380_0x2cf380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF380_0x2cf380");
#endif

    switch (ctx->pc) {
        case 0x2cf3b0u: goto label_2cf3b0;
        case 0x2cf4b4u: goto label_2cf4b4;
        case 0x2cf4e4u: goto label_2cf4e4;
        case 0x2cf508u: goto label_2cf508;
        case 0x2cf520u: goto label_2cf520;
        case 0x2cf534u: goto label_2cf534;
        case 0x2cf5b4u: goto label_2cf5b4;
        case 0x2cf5c4u: goto label_2cf5c4;
        case 0x2cf5d4u: goto label_2cf5d4;
        case 0x2cf5e8u: goto label_2cf5e8;
        case 0x2cf638u: goto label_2cf638;
        case 0x2cf6f4u: goto label_2cf6f4;
        case 0x2cf6fcu: goto label_2cf6fc;
        case 0x2cf70cu: goto label_2cf70c;
        default: break;
    }

    ctx->pc = 0x2cf380u;

    // 0x2cf380: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2cf380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2cf384: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2cf384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2cf388: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2cf388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2cf38c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2cf38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2cf390: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cf390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf394: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cf394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cf398: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cf398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf39c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cf39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cf3a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cf3a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf3a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2cf3a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2cf3a8: 0x27908060  addiu       $s0, $gp, -0x7FA0
    ctx->pc = 0x2cf3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2cf3ac: 0x0  nop
    ctx->pc = 0x2cf3acu;
    // NOP
label_2cf3b0:
    // 0x2cf3b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2cf3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cf3b4: 0x10800060  beqz        $a0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2CF3B4u;
    {
        const bool branch_taken_0x2cf3b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf3b4) {
            ctx->pc = 0x2CF538u;
            goto label_2cf538;
        }
    }
    ctx->pc = 0x2CF3BCu;
    // 0x2cf3bc: 0x1080005e  beqz        $a0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2CF3BCu;
    {
        const bool branch_taken_0x2cf3bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf3bc) {
            ctx->pc = 0x2CF538u;
            goto label_2cf538;
        }
    }
    ctx->pc = 0x2CF3C4u;
    // 0x2cf3c4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2cf3c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cf3c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cf3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cf3cc: 0x1462005a  bne         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2CF3CCu;
    {
        const bool branch_taken_0x2cf3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cf3cc) {
            ctx->pc = 0x2CF538u;
            goto label_2cf538;
        }
    }
    ctx->pc = 0x2CF3D4u;
    // 0x2cf3d4: 0x8c8206c8  lw          $v0, 0x6C8($a0)
    ctx->pc = 0x2cf3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x2cf3d8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2cf3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2cf3dc: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2CF3DCu;
    {
        const bool branch_taken_0x2cf3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf3dc) {
            ctx->pc = 0x2CF538u;
            goto label_2cf538;
        }
    }
    ctx->pc = 0x2CF3E4u;
    // 0x2cf3e4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2cf3e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2cf3e8: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2cf3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2cf3ec: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2CF3ECu;
    {
        const bool branch_taken_0x2cf3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CF3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3ECu;
        // 0x2cf3f0: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf3ec) {
            ctx->pc = 0x2CF488u;
            goto label_2cf488;
        }
    }
    ctx->pc = 0x2CF3F4u;
    // 0x2cf3f4: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2cf3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2cf3f8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2CF3F8u;
    {
        const bool branch_taken_0x2cf3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CF3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF3F8u;
        // 0x2cf3fc: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf3f8) {
            ctx->pc = 0x2CF470u;
            goto label_2cf470;
        }
    }
    ctx->pc = 0x2CF400u;
    // 0x2cf400: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CF400u;
    {
        const bool branch_taken_0x2cf400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cf400) {
            ctx->pc = 0x2CF458u;
            goto label_2cf458;
        }
    }
    ctx->pc = 0x2CF408u;
    // 0x2cf408: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x2cf408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2cf40c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CF40Cu;
    {
        const bool branch_taken_0x2cf40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CF410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF40Cu;
        // 0x2cf410: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf40c) {
            ctx->pc = 0x2CF440u;
            goto label_2cf440;
        }
    }
    ctx->pc = 0x2CF414u;
    // 0x2cf414: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF414u;
    {
        const bool branch_taken_0x2cf414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cf414) {
            ctx->pc = 0x2CF428u;
            goto label_2cf428;
        }
    }
    ctx->pc = 0x2CF41Cu;
    // 0x2cf41c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2CF41Cu;
    {
        const bool branch_taken_0x2cf41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf41c) {
            ctx->pc = 0x2CF4A0u;
            goto label_2cf4a0;
        }
    }
    ctx->pc = 0x2CF424u;
    // 0x2cf424: 0x0  nop
    ctx->pc = 0x2cf424u;
    // NOP
label_2cf428:
    // 0x2cf428: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2cf428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2cf42c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2cf42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2cf430: 0x78420470  lq          $v0, 0x470($v0)
    ctx->pc = 0x2cf430u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 1136)));
    // 0x2cf434: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2CF434u;
    {
        const bool branch_taken_0x2cf434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF434u;
        // 0x2cf438: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf434) {
            ctx->pc = 0x2CF4A8u;
            goto label_2cf4a8;
        }
    }
    ctx->pc = 0x2CF43Cu;
    // 0x2cf43c: 0x0  nop
    ctx->pc = 0x2cf43cu;
    // NOP
label_2cf440:
    // 0x2cf440: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2cf440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2cf444: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2cf444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2cf448: 0x78420470  lq          $v0, 0x470($v0)
    ctx->pc = 0x2cf448u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 1136)));
    // 0x2cf44c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2CF44Cu;
    {
        const bool branch_taken_0x2cf44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF44Cu;
        // 0x2cf450: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf44c) {
            ctx->pc = 0x2CF4A8u;
            goto label_2cf4a8;
        }
    }
    ctx->pc = 0x2CF454u;
    // 0x2cf454: 0x0  nop
    ctx->pc = 0x2cf454u;
    // NOP
label_2cf458:
    // 0x2cf458: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2cf458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2cf45c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2cf45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2cf460: 0x78420470  lq          $v0, 0x470($v0)
    ctx->pc = 0x2cf460u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 1136)));
    // 0x2cf464: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CF464u;
    {
        const bool branch_taken_0x2cf464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF464u;
        // 0x2cf468: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf464) {
            ctx->pc = 0x2CF4A8u;
            goto label_2cf4a8;
        }
    }
    ctx->pc = 0x2CF46Cu;
    // 0x2cf46c: 0x0  nop
    ctx->pc = 0x2cf46cu;
    // NOP
label_2cf470:
    // 0x2cf470: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2cf470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2cf474: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2cf474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2cf478: 0x78420470  lq          $v0, 0x470($v0)
    ctx->pc = 0x2cf478u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 1136)));
    // 0x2cf47c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2CF47Cu;
    {
        const bool branch_taken_0x2cf47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF47Cu;
        // 0x2cf480: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf47c) {
            ctx->pc = 0x2CF4A8u;
            goto label_2cf4a8;
        }
    }
    ctx->pc = 0x2CF484u;
    // 0x2cf484: 0x0  nop
    ctx->pc = 0x2cf484u;
    // NOP
label_2cf488:
    // 0x2cf488: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2cf488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2cf48c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2cf48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2cf490: 0x78420470  lq          $v0, 0x470($v0)
    ctx->pc = 0x2cf490u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 1136)));
    // 0x2cf494: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF494u;
    {
        const bool branch_taken_0x2cf494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF494u;
        // 0x2cf498: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf494) {
            ctx->pc = 0x2CF4A8u;
            goto label_2cf4a8;
        }
    }
    ctx->pc = 0x2CF49Cu;
    // 0x2cf49c: 0x0  nop
    ctx->pc = 0x2cf49cu;
    // NOP
label_2cf4a0:
    // 0x2cf4a0: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x2cf4a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2cf4a4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2cf4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_2cf4a8:
    // 0x2cf4a8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2cf4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cf4ac: 0xc096988  jal         func_25A620
    ctx->pc = 0x2CF4ACu;
    SET_GPR_U32(ctx, 31, 0x2CF4B4u);
    ctx->pc = 0x2CF4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF4ACu;
    // 0x2cf4b0: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x2CF4ACu, 0x2CF4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF4B4u;
label_2cf4b4:
    // 0x2cf4b4: 0x92632b68  lbu         $v1, 0x2B68($s3)
    ctx->pc = 0x2cf4b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11112)));
    // 0x2cf4b8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2cf4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2cf4bc: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x2cf4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x2cf4c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cf4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cf4c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cf4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cf4c8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2cf4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf4cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cf4ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf4d0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2CF4D0u;
    {
        const bool branch_taken_0x2cf4d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CF4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF4D0u;
        // 0x2cf4d4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf4d0) {
            ctx->pc = 0x2CF510u;
            goto label_2cf510;
        }
    }
    ctx->pc = 0x2CF4D8u;
    // 0x2cf4d8: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x2cf4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2cf4dc: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2CF4DCu;
    SET_GPR_U32(ctx, 31, 0x2CF4E4u);
    ctx->pc = 0x2CF4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF4DCu;
    // 0x2cf4e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2CF4DCu, 0x2CF4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF4E4u;
label_2cf4e4:
    // 0x2cf4e4: 0x92632b68  lbu         $v1, 0x2B68($s3)
    ctx->pc = 0x2cf4e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11112)));
    // 0x2cf4e8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2cf4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2cf4ec: 0x244278f8  addiu       $v0, $v0, 0x78F8
    ctx->pc = 0x2cf4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30968));
    // 0x2cf4f0: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x2cf4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x2cf4f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cf4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cf4f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cf4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cf4fc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2cf4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cf500: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x2CF500u;
    SET_GPR_U32(ctx, 31, 0x2CF508u);
    ctx->pc = 0x2CF504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF500u;
    // 0x2cf504: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x2CF500u, 0x2CF508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF508u;
label_2cf508:
    // 0x2cf508: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CF508u;
    {
        const bool branch_taken_0x2cf508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf508) {
            ctx->pc = 0x2CF538u;
            goto label_2cf538;
        }
    }
    ctx->pc = 0x2CF510u;
label_2cf510:
    // 0x2cf510: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2cf510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2cf514: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x2cf514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2cf518: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2CF518u;
    SET_GPR_U32(ctx, 31, 0x2CF520u);
    ctx->pc = 0x2CF51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF518u;
    // 0x2cf51c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2CF518u, 0x2CF520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF520u;
label_2cf520:
    // 0x2cf520: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2cf520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2cf524: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x2cf524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x2cf528: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cf528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cf52c: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x2CF52Cu;
    SET_GPR_U32(ctx, 31, 0x2CF534u);
    ctx->pc = 0x2CF530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF52Cu;
    // 0x2cf530: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x2CF52Cu, 0x2CF534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF534u;
label_2cf534:
    // 0x2cf534: 0x0  nop
    ctx->pc = 0x2cf534u;
    // NOP
label_2cf538:
    // 0x2cf538: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cf538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2cf53c: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2cf53cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cf540: 0x1440ff9b  bnez        $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x2CF540u;
    {
        const bool branch_taken_0x2cf540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF540u;
        // 0x2cf544: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf540) {
            ctx->pc = 0x2CF3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf3b0;
        }
    }
    ctx->pc = 0x2CF548u;
    // 0x2cf548: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x2CF548u;
    {
        const bool branch_taken_0x2cf548 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf548) {
            ctx->pc = 0x2CF5F0u;
            goto label_2cf5f0;
        }
    }
    ctx->pc = 0x2CF550u;
    // 0x2cf550: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2cf550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf554: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2cf554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2cf558: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cf558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cf55c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2cf55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2cf560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cf560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cf564: 0x0  nop
    ctx->pc = 0x2cf564u;
    // NOP
    // 0x2cf568: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2cf568u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2cf56c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cf56cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf570: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CF570u;
    {
        const bool branch_taken_0x2cf570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cf570) {
            ctx->pc = 0x2CF588u;
            goto label_2cf588;
        }
    }
    ctx->pc = 0x2CF578u;
    // 0x2cf578: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cf578u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cf57c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2cf57cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2cf580: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CF580u;
    {
        const bool branch_taken_0x2cf580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF580u;
        // 0x2cf584: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf580) {
            ctx->pc = 0x2CF5A4u;
            goto label_2cf5a4;
        }
    }
    ctx->pc = 0x2CF588u;
label_2cf588:
    // 0x2cf588: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cf588u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cf58c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2cf58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2cf590: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cf590u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cf594: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2cf594u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2cf598: 0x0  nop
    ctx->pc = 0x2cf598u;
    // NOP
    // 0x2cf59c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2cf59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2cf5a0: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2cf5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2cf5a4:
    // 0x2cf5a4: 0xa2632b58  sb          $v1, 0x2B58($s3)
    ctx->pc = 0x2cf5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11096), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cf5a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2cf5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf5ac: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2CF5ACu;
    SET_GPR_U32(ctx, 31, 0x2CF5B4u);
    ctx->pc = 0x2CF5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF5ACu;
    // 0x2cf5b0: 0x26662b40  addiu       $a2, $s3, 0x2B40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 11072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2CF5ACu, 0x2CF5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5B4u;
label_2cf5b4:
    // 0x2cf5b4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2cf5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x2cf5b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cf5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cf5bc: 0xc0969e4  jal         func_25A790
    ctx->pc = 0x2CF5BCu;
    SET_GPR_U32(ctx, 31, 0x2CF5C4u);
    ctx->pc = 0x2CF5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF5BCu;
    // 0x2cf5c0: 0x26642b40  addiu       $a0, $s3, 0x2B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 11072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A790u, 0x2CF5BCu, 0x2CF5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5C4u;
label_2cf5c4:
    // 0x2cf5c4: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2cf5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2cf5c8: 0x26662b40  addiu       $a2, $s3, 0x2B40
    ctx->pc = 0x2cf5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 11072));
    // 0x2cf5cc: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2CF5CCu;
    SET_GPR_U32(ctx, 31, 0x2CF5D4u);
    ctx->pc = 0x2CF5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF5CCu;
    // 0x2cf5d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2CF5CCu, 0x2CF5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5D4u;
label_2cf5d4:
    // 0x2cf5d4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2cf5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2cf5d8: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x2cf5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x2cf5dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cf5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cf5e0: 0xc096914  jal         func_25A450
    ctx->pc = 0x2CF5E0u;
    SET_GPR_U32(ctx, 31, 0x2CF5E8u);
    ctx->pc = 0x2CF5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF5E0u;
    // 0x2cf5e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A450u, 0x2CF5E0u, 0x2CF5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5E8u;
label_2cf5e8:
    // 0x2cf5e8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2CF5E8u;
    {
        const bool branch_taken_0x2cf5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf5e8) {
            ctx->pc = 0x2CF7A8u;
            goto label_2cf7a8;
        }
    }
    ctx->pc = 0x2CF5F0u;
label_2cf5f0:
    // 0x2cf5f0: 0x92622b58  lbu         $v0, 0x2B58($s3)
    ctx->pc = 0x2cf5f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11096)));
    // 0x2cf5f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF5F4u;
    {
        const bool branch_taken_0x2cf5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf5f4) {
            ctx->pc = 0x2CF608u;
            goto label_2cf608;
        }
    }
    ctx->pc = 0x2CF5FCu;
    // 0x2cf5fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2CF5FCu;
    {
        const bool branch_taken_0x2cf5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF5FCu;
        // 0x2cf600: 0xae602b54  sw          $zero, 0x2B54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 11092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf5fc) {
            ctx->pc = 0x2CF628u;
            goto label_2cf628;
        }
    }
    ctx->pc = 0x2CF604u;
    // 0x2cf604: 0x0  nop
    ctx->pc = 0x2cf604u;
    // NOP
label_2cf608:
    // 0x2cf608: 0x92632b68  lbu         $v1, 0x2B68($s3)
    ctx->pc = 0x2cf608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11112)));
    // 0x2cf60c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2cf60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2cf610: 0x244278f0  addiu       $v0, $v0, 0x78F0
    ctx->pc = 0x2cf610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30960));
    // 0x2cf614: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cf614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cf618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cf618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cf61c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf620: 0xe6602b54  swc1        $f0, 0x2B54($s3)
    ctx->pc = 0x2cf620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 11092), bits); }
    // 0x2cf624: 0x0  nop
    ctx->pc = 0x2cf624u;
    // NOP
label_2cf628:
    // 0x2cf628: 0x8e6507c0  lw          $a1, 0x7C0($s3)
    ctx->pc = 0x2cf628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1984)));
    // 0x2cf62c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2cf62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2cf630: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2CF630u;
    SET_GPR_U32(ctx, 31, 0x2CF638u);
    ctx->pc = 0x2CF634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF630u;
    // 0x2cf634: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2CF630u, 0x2CF638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF638u;
label_2cf638:
    // 0x2cf638: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CF638u;
    {
        const bool branch_taken_0x2cf638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf638) {
            ctx->pc = 0x2CF690u;
            goto label_2cf690;
        }
    }
    ctx->pc = 0x2CF640u;
    // 0x2cf640: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2cf640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf644: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2cf644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2cf648: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2cf648u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cf64c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CF64Cu;
    {
        const bool branch_taken_0x2cf64c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF64Cu;
        // 0x2cf650: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf64c) {
            ctx->pc = 0x2CF658u;
            goto label_2cf658;
        }
    }
    ctx->pc = 0x2CF654u;
    // 0x2cf654: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cf654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf658:
    // 0x2cf658: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2CF658u;
    {
        const bool branch_taken_0x2cf658 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf658) {
            ctx->pc = 0x2CF690u;
            goto label_2cf690;
        }
    }
    ctx->pc = 0x2CF660u;
    // 0x2cf660: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2cf660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf664: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2cf664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2cf668: 0xc44028f0  lwc1        $f0, 0x28F0($v0)
    ctx->pc = 0x2cf668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf66c: 0x246378e8  addiu       $v1, $v1, 0x78E8
    ctx->pc = 0x2cf66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30952));
    // 0x2cf670: 0x92622b68  lbu         $v0, 0x2B68($s3)
    ctx->pc = 0x2cf670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11112)));
    // 0x2cf674: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cf674u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cf678: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cf678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cf67c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cf67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cf680: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2cf680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf684: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cf684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cf688: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2CF688u;
    {
        const bool branch_taken_0x2cf688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF688u;
        // 0x2cf68c: 0xe6602b50  swc1        $f0, 0x2B50($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 11088), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf688) {
            ctx->pc = 0x2CF6D8u;
            goto label_2cf6d8;
        }
    }
    ctx->pc = 0x2CF690u;
label_2cf690:
    // 0x2cf690: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2cf690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2cf694: 0xc66128f0  lwc1        $f1, 0x28F0($s3)
    ctx->pc = 0x2cf694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cf698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cf69c: 0x0  nop
    ctx->pc = 0x2cf69cu;
    // NOP
    // 0x2cf6a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf6a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf6a4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2CF6A4u;
    {
        const bool branch_taken_0x2cf6a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cf6a4) {
            ctx->pc = 0x2CF6D8u;
            goto label_2cf6d8;
        }
    }
    ctx->pc = 0x2CF6ACu;
    // 0x2cf6ac: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x2cf6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf6b0: 0x92632b68  lbu         $v1, 0x2B68($s3)
    ctx->pc = 0x2cf6b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11112)));
    // 0x2cf6b4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2cf6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2cf6b8: 0x244278e8  addiu       $v0, $v0, 0x78E8
    ctx->pc = 0x2cf6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30952));
    // 0x2cf6bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cf6bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cf6c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cf6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cf6c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cf6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cf6c8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2cf6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf6cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cf6ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cf6d0: 0xe6602b50  swc1        $f0, 0x2B50($s3)
    ctx->pc = 0x2cf6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 11088), bits); }
    // 0x2cf6d4: 0x0  nop
    ctx->pc = 0x2cf6d4u;
    // NOP
label_2cf6d8:
    // 0x2cf6d8: 0xc6622b50  lwc1        $f2, 0x2B50($s3)
    ctx->pc = 0x2cf6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 11088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf6dc: 0xc6612b54  lwc1        $f1, 0x2B54($s3)
    ctx->pc = 0x2cf6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf6e0: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x2cf6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf6e4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2cf6e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2cf6e8: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x2cf6e8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cf6ec: 0xc04b946  jal         func_12E518
    ctx->pc = 0x2CF6ECu;
    SET_GPR_U32(ctx, 31, 0x2CF6F4u);
    ctx->pc = 0x2CF6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF6ECu;
    // 0x2cf6f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x2CF6ECu, 0x2CF6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF6F4u;
label_2cf6f4:
    // 0x2cf6f4: 0xc0478a6  jal         func_11E298
    ctx->pc = 0x2CF6F4u;
    SET_GPR_U32(ctx, 31, 0x2CF6FCu);
    ctx->pc = 0x2CF6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF6F4u;
    // 0x2cf6f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E298u, 0x2CF6F4u, 0x2CF6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF6FCu;
label_2cf6fc:
    // 0x2cf6fc: 0x3c034024  lui         $v1, 0x4024
    ctx->pc = 0x2cf6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16420 << 16));
    // 0x2cf700: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cf700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf704: 0xc0400cc  jal         func_100330
    ctx->pc = 0x2CF704u;
    SET_GPR_U32(ctx, 31, 0x2CF70Cu);
    ctx->pc = 0x2CF708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF704u;
    // 0x2cf708: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100330u, 0x2CF704u, 0x2CF70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF70Cu;
label_2cf70c:
    // 0x2cf70c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2CF70Cu;
    {
        const bool branch_taken_0x2cf70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf70c) {
            ctx->pc = 0x2CF7A8u;
            goto label_2cf7a8;
        }
    }
    ctx->pc = 0x2CF714u;
    // 0x2cf714: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cf714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cf718: 0x0  nop
    ctx->pc = 0x2cf718u;
    // NOP
    // 0x2cf71c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2cf71cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf720: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2CF720u;
    {
        const bool branch_taken_0x2cf720 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cf720) {
            ctx->pc = 0x2CF770u;
            goto label_2cf770;
        }
    }
    ctx->pc = 0x2CF728u;
    // 0x2cf728: 0x92660002  lbu         $a2, 0x2($s3)
    ctx->pc = 0x2cf728u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2cf72c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2cf72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2cf730: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cf730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cf734: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2cf734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2cf738: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2cf738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2cf73c: 0x24a50b8c  addiu       $a1, $a1, 0xB8C
    ctx->pc = 0x2cf73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2956));
    // 0x2cf740: 0x3484d70a  ori         $a0, $a0, 0xD70A
    ctx->pc = 0x2cf740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2cf744: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2cf744u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cf748: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2cf748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2cf74c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2cf74cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2cf750: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cf750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cf754: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2cf754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cf758: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2cf758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf75c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2cf75cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2cf760: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cf760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cf764: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CF764u;
    {
        const bool branch_taken_0x2cf764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF764u;
        // 0x2cf768: 0xe66000a4  swc1        $f0, 0xA4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf764) {
            ctx->pc = 0x2CF7A8u;
            goto label_2cf7a8;
        }
    }
    ctx->pc = 0x2CF76Cu;
    // 0x2cf76c: 0x0  nop
    ctx->pc = 0x2cf76cu;
    // NOP
label_2cf770:
    // 0x2cf770: 0x92650002  lbu         $a1, 0x2($s3)
    ctx->pc = 0x2cf770u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2cf774: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2cf774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2cf778: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cf778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cf77c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2cf77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2cf780: 0x24840b8c  addiu       $a0, $a0, 0xB8C
    ctx->pc = 0x2cf780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2956));
    // 0x2cf784: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cf784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cf788: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2cf788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2cf78c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2cf78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cf790: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cf790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cf794: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2cf794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cf798: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2cf798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf79c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cf79cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cf7a0: 0xe66000a4  swc1        $f0, 0xA4($s3)
    ctx->pc = 0x2cf7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 164), bits); }
    // 0x2cf7a4: 0x0  nop
    ctx->pc = 0x2cf7a4u;
    // NOP
label_2cf7a8:
    // 0x2cf7a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2cf7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cf7ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2cf7acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cf7b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2cf7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cf7b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2cf7b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cf7b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cf7b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf7bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cf7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF7C0u;
        // 0x2cf7c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF7C8u;
}
