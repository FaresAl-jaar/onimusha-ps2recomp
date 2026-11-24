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

// Function: sub_002273D8
// Address: 0x2273d8 - 0x227540
void sub_002273D8_0x2273d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002273D8_0x2273d8");
#endif

    switch (ctx->pc) {
        case 0x2274a8u: goto label_2274a8;
        case 0x227508u: goto label_227508;
        case 0x227518u: goto label_227518;
        default: break;
    }

    ctx->pc = 0x2273d8u;

    // 0x2273d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2273d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2273dc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2273dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2273e0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2273e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2273e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2273e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273e8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2273e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2273ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2273ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273f0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2273f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2273f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2273f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273f8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2273f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2273fc: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x2273fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x227400: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x227400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x227404: 0x262a0014  addiu       $t2, $s1, 0x14
    ctx->pc = 0x227404u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x227408: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x227408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x22740c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x22740cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227410: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x227410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x227414: 0x262b0024  addiu       $t3, $s1, 0x24
    ctx->pc = 0x227414u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x227418: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x227418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22741c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x22741cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x227420: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x227420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227424: 0x8e0c0004  lw          $t4, 0x4($s0)
    ctx->pc = 0x227424u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x227428: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x227428u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x22742c: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x22742cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x227430: 0x1851818  mult        $v1, $t4, $a1
    ctx->pc = 0x227430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x227434: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x227434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x227438: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x227438u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x22743c: 0x180a82d  daddu       $s5, $t4, $zero
    ctx->pc = 0x22743cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227440: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x227440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227444: 0x5a043  sra         $s4, $a1, 1
    ctx->pc = 0x227444u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 1));
    // 0x227448: 0x8d4d0004  lw          $t5, 0x4($t2)
    ctx->pc = 0x227448u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x22744c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x22744cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x227450: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x227450u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x227454: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x227454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227458: 0x8d6a0004  lw          $t2, 0x4($t3)
    ctx->pc = 0x227458u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x22745c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x22745cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x227460: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x227460u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x227464: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x227464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227468: 0x8e4b000c  lw          $t3, 0xC($s2)
    ctx->pc = 0x227468u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22746c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x22746cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x227470: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x227470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x227474: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x227474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x227478: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x227478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x22747c: 0xe7a80b  movn        $s5, $a3, $a3
    ctx->pc = 0x22747cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 7));
    // 0x227480: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x227480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x227484: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x227484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x227488: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x227488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x22748c: 0xafad0010  sw          $t5, 0x10($sp)
    ctx->pc = 0x22748cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    // 0x227490: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x227490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x227494: 0x11600002  beqz        $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x227494u;
    {
        const bool branch_taken_0x227494 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x227498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227494u;
        // 0x227498: 0xafac000c  sw          $t4, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227494) {
            ctx->pc = 0x2274A0u;
            goto label_2274a0;
        }
    }
    ctx->pc = 0x22749Cu;
    // 0x22749c: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x22749cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2274a0:
    // 0x2274a0: 0xc089d90  jal         func_227640
    ctx->pc = 0x2274A0u;
    SET_GPR_U32(ctx, 31, 0x2274A8u);
    ctx->pc = 0x227640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227640u, 0x2274A0u, 0x2274A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2274A8u;
label_2274a8:
    // 0x2274a8: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x2274a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2274ac: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2274acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2274b0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2274b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2274b4: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x2274b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2274b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2274b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2274bc: 0x33fc2  srl         $a3, $v1, 31
    ctx->pc = 0x2274bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2274c0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x2274c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2274c4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2274c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2274c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2274c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2274cc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2274ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2274d0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2274d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2274d4: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x2274d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x2274d8: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x2274d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x2274dc: 0xafb60024  sw          $s6, 0x24($sp)
    ctx->pc = 0x2274dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 22));
    // 0x2274e0: 0xafb50028  sw          $s5, 0x28($sp)
    ctx->pc = 0x2274e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 21));
    // 0x2274e4: 0x12690006  beq         $s3, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2274E4u;
    {
        const bool branch_taken_0x2274e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 9));
        ctx->pc = 0x2274E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274E4u;
        // 0x2274e8: 0xafb4002c  sw          $s4, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2274e4) {
            ctx->pc = 0x227500u;
            goto label_227500;
        }
    }
    ctx->pc = 0x2274ECu;
    // 0x2274ec: 0x126a0008  beq         $s3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2274ECu;
    {
        const bool branch_taken_0x2274ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 10));
        ctx->pc = 0x2274F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274ECu;
        // 0x2274f0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2274ec) {
            ctx->pc = 0x227510u;
            goto label_227510;
        }
    }
    ctx->pc = 0x2274F4u;
    // 0x2274f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2274F4u;
    {
        const bool branch_taken_0x2274f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2274F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274F4u;
        // 0x2274f8: 0xdfb10048  ld          $s1, 0x48($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2274f4) {
            ctx->pc = 0x227520u;
            goto label_227520;
        }
    }
    ctx->pc = 0x2274FCu;
    // 0x2274fc: 0x0  nop
    ctx->pc = 0x2274fcu;
    // NOP
label_227500:
    // 0x227500: 0xc0894d0  jal         func_225340
    ctx->pc = 0x227500u;
    SET_GPR_U32(ctx, 31, 0x227508u);
    ctx->pc = 0x225340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225340u, 0x227500u, 0x227508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227508u;
label_227508:
    // 0x227508: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x227508u;
    {
        const bool branch_taken_0x227508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227508u;
        // 0x22750c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227508) {
            ctx->pc = 0x22751Cu;
            goto label_22751c;
        }
    }
    ctx->pc = 0x227510u;
label_227510:
    // 0x227510: 0xc0894d0  jal         func_225340
    ctx->pc = 0x227510u;
    SET_GPR_U32(ctx, 31, 0x227518u);
    ctx->pc = 0x227514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227510u;
    // 0x227514: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225340u, 0x227510u, 0x227518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227518u;
label_227518:
    // 0x227518: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x227518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22751c:
    // 0x22751c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x22751cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_227520:
    // 0x227520: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x227520u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x227524: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x227524u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x227528: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x227528u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22752c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x22752cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x227530: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x227530u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x227534: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x227534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x227538: 0x3e00008  jr          $ra
    ctx->pc = 0x227538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227538u;
        // 0x22753c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227540u;
}
