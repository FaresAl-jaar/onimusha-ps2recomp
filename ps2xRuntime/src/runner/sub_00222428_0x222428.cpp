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

// Function: sub_00222428
// Address: 0x222428 - 0x222504
void sub_00222428_0x222428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222428_0x222428");
#endif

    switch (ctx->pc) {
        case 0x222444u: goto label_222444;
        case 0x222468u: goto label_222468;
        default: break;
    }

    ctx->pc = 0x222428u;

    // 0x222428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22242c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22242cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222430: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x222430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x222434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222438: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x222438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22243c: 0xc049590  jal         func_125640
    ctx->pc = 0x22243Cu;
    SET_GPR_U32(ctx, 31, 0x222444u);
    ctx->pc = 0x222440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22243Cu;
    // 0x222440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x22243Cu, 0x222444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222444u;
label_222444:
    // 0x222444: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x222444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222448: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x222448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22244c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x22244cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x222450: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x222450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x222454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222458: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x222458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x22245c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x22245cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x222460: 0xc088942  jal         func_222508
    ctx->pc = 0x222460u;
    SET_GPR_U32(ctx, 31, 0x222468u);
    ctx->pc = 0x222464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222460u;
    // 0x222464: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222508u, 0x222460u, 0x222468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222468u;
label_222468:
    // 0x222468: 0xfe000108  sd          $zero, 0x108($s0)
    ctx->pc = 0x222468u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 264), GPR_U64(ctx, 0));
    // 0x22246c: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x22246cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x222470: 0x34634240  ori         $v1, $v1, 0x4240
    ctx->pc = 0x222470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16960);
    // 0x222474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222478: 0x2404412b  addiu       $a0, $zero, 0x412B
    ctx->pc = 0x222478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16683));
    // 0x22247c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x22247cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x222480: 0x34a50d40  ori         $a1, $a1, 0xD40
    ctx->pc = 0x222480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3392);
    // 0x222484: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x222484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222488: 0xfe020130  sd          $v0, 0x130($s0)
    ctx->pc = 0x222488u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 304), GPR_U64(ctx, 2));
    // 0x22248c: 0xfe040138  sd          $a0, 0x138($s0)
    ctx->pc = 0x22248cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 312), GPR_U64(ctx, 4));
    // 0x222490: 0xfe050148  sd          $a1, 0x148($s0)
    ctx->pc = 0x222490u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 328), GPR_U64(ctx, 5));
    // 0x222494: 0xfe030170  sd          $v1, 0x170($s0)
    ctx->pc = 0x222494u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 368), GPR_U64(ctx, 3));
    // 0x222498: 0xfe060178  sd          $a2, 0x178($s0)
    ctx->pc = 0x222498u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 6));
    // 0x22249c: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x22249cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x2224a0: 0xfe020110  sd          $v0, 0x110($s0)
    ctx->pc = 0x2224a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 272), GPR_U64(ctx, 2));
    // 0x2224a4: 0xfe000118  sd          $zero, 0x118($s0)
    ctx->pc = 0x2224a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 280), GPR_U64(ctx, 0));
    // 0x2224a8: 0xfe020120  sd          $v0, 0x120($s0)
    ctx->pc = 0x2224a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 288), GPR_U64(ctx, 2));
    // 0x2224ac: 0xfe000128  sd          $zero, 0x128($s0)
    ctx->pc = 0x2224acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 296), GPR_U64(ctx, 0));
    // 0x2224b0: 0xfe030140  sd          $v1, 0x140($s0)
    ctx->pc = 0x2224b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 320), GPR_U64(ctx, 3));
    // 0x2224b4: 0xfe030150  sd          $v1, 0x150($s0)
    ctx->pc = 0x2224b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 336), GPR_U64(ctx, 3));
    // 0x2224b8: 0xfe000158  sd          $zero, 0x158($s0)
    ctx->pc = 0x2224b8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 344), GPR_U64(ctx, 0));
    // 0x2224bc: 0xfe030160  sd          $v1, 0x160($s0)
    ctx->pc = 0x2224bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 352), GPR_U64(ctx, 3));
    // 0x2224c0: 0xfe000168  sd          $zero, 0x168($s0)
    ctx->pc = 0x2224c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 360), GPR_U64(ctx, 0));
    // 0x2224c4: 0xfe000180  sd          $zero, 0x180($s0)
    ctx->pc = 0x2224c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 0));
    // 0x2224c8: 0xfe000188  sd          $zero, 0x188($s0)
    ctx->pc = 0x2224c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 392), GPR_U64(ctx, 0));
    // 0x2224cc: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x2224ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
    // 0x2224d0: 0xae000194  sw          $zero, 0x194($s0)
    ctx->pc = 0x2224d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 0));
    // 0x2224d4: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x2224d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
    // 0x2224d8: 0xae00019c  sw          $zero, 0x19C($s0)
    ctx->pc = 0x2224d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
    // 0x2224dc: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x2224dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x2224e0: 0xae0001a4  sw          $zero, 0x1A4($s0)
    ctx->pc = 0x2224e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
    // 0x2224e4: 0xae0001a8  sw          $zero, 0x1A8($s0)
    ctx->pc = 0x2224e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x2224e8: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x2224e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
    // 0x2224ec: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x2224ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x2224f0: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x2224f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x2224f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2224f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2224f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2224f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2224fc: 0x8088aee  j           func_222BB8
    ctx->pc = 0x2224FCu;
    ctx->pc = 0x222500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2224FCu;
    // 0x222500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222BB8u;
    sub_00222BB8_0x222bb8(rdram, ctx, runtime); return;
    ctx->pc = 0x222504u;
}
