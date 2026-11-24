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

// Function: sub_002A1330
// Address: 0x2a1330 - 0x2a13dc
void sub_002A1330_0x2a1330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1330_0x2a1330");
#endif

    switch (ctx->pc) {
        case 0x2a13acu: goto label_2a13ac;
        default: break;
    }

    ctx->pc = 0x2a1330u;

    // 0x2a1330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a1330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a1334: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x2a1334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
    // 0x2a1338: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a1338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a133c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2a133cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2a1340: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a1340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a1344: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a1344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a1348: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2a1348u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a134c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2a134cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a1350: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2a1350u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a1354: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2a1354u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2a1358: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2a1358u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2a135c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A135Cu;
    {
        const bool branch_taken_0x2a135c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A1360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A135Cu;
        // 0x2a1360: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a135c) {
            ctx->pc = 0x2A136Cu;
            goto label_2a136c;
        }
    }
    ctx->pc = 0x2A1364u;
    // 0x2a1364: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1364u;
    {
        const bool branch_taken_0x2a1364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1364u;
        // 0x2a1368: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1364) {
            ctx->pc = 0x2A1378u;
            goto label_2a1378;
        }
    }
    ctx->pc = 0x2A136Cu;
label_2a136c:
    // 0x2a136c: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x2a136cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x2a1370: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2a1370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2a1374: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2a1374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a1378:
    // 0x2a1378: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a1378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a137c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2a137cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a1380: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2a1380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2a1384: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2a1384u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a1388: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2a1388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2a138c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2a138cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1390: 0xae0600c0  sw          $a2, 0xC0($s0)
    ctx->pc = 0x2a1390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 6));
    // 0x2a1394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1398: 0xa60800c8  sh          $t0, 0xC8($s0)
    ctx->pc = 0x2a1398u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 8));
    // 0x2a139c: 0x260500c8  addiu       $a1, $s0, 0xC8
    ctx->pc = 0x2a139cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x2a13a0: 0xa60900ca  sh          $t1, 0xCA($s0)
    ctx->pc = 0x2a13a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 202), (uint16_t)GPR_U32(ctx, 9));
    // 0x2a13a4: 0xc04d4e8  jal         func_1353A0
    ctx->pc = 0x2A13A4u;
    SET_GPR_U32(ctx, 31, 0x2A13ACu);
    ctx->pc = 0x2A13A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A13A4u;
    // 0x2a13a8: 0xa60a00cc  sh          $t2, 0xCC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 204), (uint16_t)GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1353A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1353A0u, 0x2A13A4u, 0x2A13ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13ACu;
label_2a13ac:
    // 0x2a13ac: 0xe6160030  swc1        $f22, 0x30($s0)
    ctx->pc = 0x2a13acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2a13b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a13b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a13b4: 0xe6150034  swc1        $f21, 0x34($s0)
    ctx->pc = 0x2a13b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2a13b8: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x2a13b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2a13bc: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x2a13bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x2a13c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a13c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a13c4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2a13c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a13c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a13c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a13cc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2a13ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a13d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a13d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a13d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A13D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A13D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A13D4u;
        // 0x2a13d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A13D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A13DCu;
}
