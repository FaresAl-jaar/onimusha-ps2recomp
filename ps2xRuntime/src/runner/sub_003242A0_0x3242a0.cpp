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

// Function: sub_003242A0
// Address: 0x3242a0 - 0x3243f4
void sub_003242A0_0x3242a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003242A0_0x3242a0");
#endif

    switch (ctx->pc) {
        case 0x324300u: goto label_324300;
        case 0x324328u: goto label_324328;
        case 0x32438cu: goto label_32438c;
        default: break;
    }

    ctx->pc = 0x3242a0u;

    // 0x3242a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3242a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3242a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3242a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3242a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3242a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3242ac: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x3242acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x3242b0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3242b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3242b4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3242b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3242b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3242b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3242bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3242bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3242c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3242c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3242c4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3242c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3242c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3242c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3242cc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x3242ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3242d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3242d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3242d4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3242d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3242d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3242d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3242dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3242dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3242e0: 0x9025ad89  lbu         $a1, -0x5277($at)
    ctx->pc = 0x3242e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946185)));
    // 0x3242e4: 0x3401c260  ori         $at, $zero, 0xC260
    ctx->pc = 0x3242e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49760);
    // 0x3242e8: 0x85f023  subu        $fp, $a0, $a1
    ctx->pc = 0x3242e8u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3242ec: 0x2a11821  addu        $v1, $s5, $at
    ctx->pc = 0x3242ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x3242f0: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x3242f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x3242f4: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x3242f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3242f8: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x3242F8u;
    {
        const bool branch_taken_0x3242f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3242FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3242F8u;
        // 0x3242fc: 0x27deffff  addiu       $fp, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3242f8) {
            ctx->pc = 0x3243A8u;
            goto label_3243a8;
        }
    }
    ctx->pc = 0x324300u;
label_324300:
    // 0x324300: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x324300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x324304: 0x24110030  addiu       $s1, $zero, 0x30
    ctx->pc = 0x324304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x324308: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x324308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32430c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x32430cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x324310: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x324310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x324314: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x324314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x324318: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x324318u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32431c: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x32431cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x324320: 0x8c760008  lw          $s6, 0x8($v1)
    ctx->pc = 0x324320u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x324324: 0x8c77000c  lw          $s7, 0xC($v1)
    ctx->pc = 0x324324u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_324328:
    // 0x324328: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x324328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32432c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x32432Cu;
    {
        const bool branch_taken_0x32432c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32432c) {
            ctx->pc = 0x324390u;
            goto label_324390;
        }
    }
    ctx->pc = 0x324334u;
    // 0x324334: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x324334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x324338: 0x771824  and         $v1, $v1, $s7
    ctx->pc = 0x324338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x32433c: 0x16430014  bne         $s2, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x32433Cu;
    {
        const bool branch_taken_0x32433c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x32433c) {
            ctx->pc = 0x324390u;
            goto label_324390;
        }
    }
    ctx->pc = 0x324344u;
    // 0x324344: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x324344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x324348: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x324348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x32434c: 0x16630010  bne         $s3, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x32434Cu;
    {
        const bool branch_taken_0x32434c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x32434c) {
            ctx->pc = 0x324390u;
            goto label_324390;
        }
    }
    ctx->pc = 0x324354u;
    // 0x324354: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x324354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x324358: 0x2151823  subu        $v1, $s0, $s5
    ctx->pc = 0x324358u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x32435c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x32435cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x324360: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x324360u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x324364: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x324364u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x324368: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x324368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32436c: 0x0  nop
    ctx->pc = 0x32436cu;
    // NOP
    // 0x324370: 0x1810  mfhi        $v1
    ctx->pc = 0x324370u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x324374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324378: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x324378u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x32437c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x32437cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x324380: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x324380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x324384: 0xc0c8f5c  jal         func_323D70
    ctx->pc = 0x324384u;
    SET_GPR_U32(ctx, 31, 0x32438Cu);
    ctx->pc = 0x324388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324384u;
    // 0x324388: 0x282a025  or          $s4, $s4, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323D70u, 0x324384u, 0x32438Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32438Cu;
label_32438c:
    // 0x32438c: 0x0  nop
    ctx->pc = 0x32438cu;
    // NOP
label_324390:
    // 0x324390: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x324390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x324394: 0x1620ffe4  bnez        $s1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x324394u;
    {
        const bool branch_taken_0x324394 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x324398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324394u;
        // 0x324398: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324394) {
            ctx->pc = 0x324328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324328;
        }
    }
    ctx->pc = 0x32439Cu;
    // 0x32439c: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x32439cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3243a0: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x3243A0u;
    {
        const bool branch_taken_0x3243a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3243A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243A0u;
        // 0x3243a4: 0x27deffff  addiu       $fp, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3243a0) {
            ctx->pc = 0x324300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324300;
        }
    }
    ctx->pc = 0x3243A8u;
label_3243a8:
    // 0x3243a8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3243a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3243ac: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x3243acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x3243b0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3243b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3243b4: 0xfc34ae08  sd          $s4, -0x51F8($at)
    ctx->pc = 0x3243b4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294946312), GPR_U64(ctx, 20));
    // 0x3243b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3243b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3243bc: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x3243bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x3243c0: 0xa023ad89  sb          $v1, -0x5277($at)
    ctx->pc = 0x3243c0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946185), (uint8_t)GPR_U32(ctx, 3));
    // 0x3243c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3243c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3243c8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3243c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3243cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3243ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3243d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3243d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3243d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3243d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3243d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3243d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3243dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3243dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3243e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3243e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3243e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3243e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3243e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3243e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3243ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3243ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3243F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243ECu;
        // 0x3243f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3243ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3243F4u;
}
