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

// Function: sub_00265010
// Address: 0x265010 - 0x265358
void sub_00265010_0x265010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265010_0x265010");
#endif

    switch (ctx->pc) {
        case 0x26504cu: goto label_26504c;
        case 0x265214u: goto label_265214;
        case 0x265284u: goto label_265284;
        default: break;
    }

    ctx->pc = 0x265010u;

    // 0x265010: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x265010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x265014: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x265014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x265018: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x265018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x26501c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26501cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x265020: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x265020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265024: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x265024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x265028: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x265028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26502c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x26502cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x265030: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x265030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x265034: 0xdc910020  ld          $s1, 0x20($a0)
    ctx->pc = 0x265034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x265038: 0x32230400  andi        $v1, $s1, 0x400
    ctx->pc = 0x265038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1024);
    // 0x26503c: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x26503Cu;
    {
        const bool branch_taken_0x26503c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26503Cu;
        // 0x265040: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26503c) {
            ctx->pc = 0x2651F8u;
            goto label_2651f8;
        }
    }
    ctx->pc = 0x265044u;
    // 0x265044: 0xc096a08  jal         func_25A820
    ctx->pc = 0x265044u;
    SET_GPR_U32(ctx, 31, 0x26504Cu);
    ctx->pc = 0x265048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265044u;
    // 0x265048: 0x8664000a  lh          $a0, 0xA($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A820u, 0x265044u, 0x26504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26504Cu;
label_26504c:
    // 0x26504c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26504cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x265050: 0x1043005d  beq         $v0, $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x265050u;
    {
        const bool branch_taken_0x265050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x265054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265050u;
        // 0x265054: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265050) {
            ctx->pc = 0x2651C8u;
            goto label_2651c8;
        }
    }
    ctx->pc = 0x265058u;
    // 0x265058: 0x10430039  beq         $v0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x265058u;
    {
        const bool branch_taken_0x265058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x265058) {
            ctx->pc = 0x265140u;
            goto label_265140;
        }
    }
    ctx->pc = 0x265060u;
    // 0x265060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x265060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265064: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x265064u;
    {
        const bool branch_taken_0x265064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x265064) {
            ctx->pc = 0x265108u;
            goto label_265108;
        }
    }
    ctx->pc = 0x26506Cu;
    // 0x26506c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26506Cu;
    {
        const bool branch_taken_0x26506c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26506c) {
            ctx->pc = 0x265080u;
            goto label_265080;
        }
    }
    ctx->pc = 0x265074u;
    // 0x265074: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x265074u;
    {
        const bool branch_taken_0x265074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265074) {
            ctx->pc = 0x2651F8u;
            goto label_2651f8;
        }
    }
    ctx->pc = 0x26507Cu;
    // 0x26507c: 0x0  nop
    ctx->pc = 0x26507cu;
    // NOP
label_265080:
    // 0x265080: 0x36314000  ori         $s1, $s1, 0x4000
    ctx->pc = 0x265080u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
    // 0x265084: 0x32231000  andi        $v1, $s1, 0x1000
    ctx->pc = 0x265084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
    // 0x265088: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x265088u;
    {
        const bool branch_taken_0x265088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265088u;
        // 0x26508c: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265088) {
            ctx->pc = 0x2651F8u;
            goto label_2651f8;
        }
    }
    ctx->pc = 0x265090u;
    // 0x265090: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x265090u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x265094: 0x32230080  andi        $v1, $s1, 0x80
    ctx->pc = 0x265094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
    // 0x265098: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x265098u;
    {
        const bool branch_taken_0x265098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265098) {
            ctx->pc = 0x2650B0u;
            goto label_2650b0;
        }
    }
    ctx->pc = 0x2650A0u;
    // 0x2650a0: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2650a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2650a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2650a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2650a8: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x2650a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x2650ac: 0x0  nop
    ctx->pc = 0x2650acu;
    // NOP
label_2650b0:
    // 0x2650b0: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x2650b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x2650b4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2650B4u;
    {
        const bool branch_taken_0x2650b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2650B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650B4u;
        // 0x2650b8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650b4) {
            ctx->pc = 0x2650F0u;
            goto label_2650f0;
        }
    }
    ctx->pc = 0x2650BCu;
    // 0x2650bc: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x2650bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x2650c0: 0x32230040  andi        $v1, $s1, 0x40
    ctx->pc = 0x2650c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
    // 0x2650c4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2650C4u;
    {
        const bool branch_taken_0x2650c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2650c4) {
            ctx->pc = 0x2650F0u;
            goto label_2650f0;
        }
    }
    ctx->pc = 0x2650CCu;
    // 0x2650cc: 0x92630011  lbu         $v1, 0x11($s3)
    ctx->pc = 0x2650ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
    // 0x2650d0: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x2650d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2650d4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2650d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2650d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2650D8u;
    {
        const bool branch_taken_0x2650d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2650DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650D8u;
        // 0x2650dc: 0x2248825  or          $s1, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650d8) {
            ctx->pc = 0x2650F0u;
            goto label_2650f0;
        }
    }
    ctx->pc = 0x2650E0u;
    // 0x2650e0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2650e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2650e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2650e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2650e8: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x2650e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x2650ec: 0x0  nop
    ctx->pc = 0x2650ecu;
    // NOP
label_2650f0:
    // 0x2650f0: 0x92630010  lbu         $v1, 0x10($s3)
    ctx->pc = 0x2650f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2650f4: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x2650F4u;
    {
        const bool branch_taken_0x2650f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2650F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650F4u;
        // 0x2650f8: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650f4) {
            ctx->pc = 0x2651F8u;
            goto label_2651f8;
        }
    }
    ctx->pc = 0x2650FCu;
    // 0x2650fc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2650FCu;
    {
        const bool branch_taken_0x2650fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650FCu;
        // 0x265100: 0xa2630010  sb          $v1, 0x10($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2650fc) {
            ctx->pc = 0x2651F8u;
            goto label_2651f8;
        }
    }
    ctx->pc = 0x265104u;
    // 0x265104: 0x0  nop
    ctx->pc = 0x265104u;
    // NOP
label_265108:
    // 0x265108: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x265108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x26510c: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x26510cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x265110: 0x32231000  andi        $v1, $s1, 0x1000
    ctx->pc = 0x265110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
    // 0x265114: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x265114u;
    {
        const bool branch_taken_0x265114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265114u;
        // 0x265118: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265114) {
            ctx->pc = 0x2651F8u;
            goto label_2651f8;
        }
    }
    ctx->pc = 0x26511Cu;
    // 0x26511c: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x26511cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x265120: 0x32230080  andi        $v1, $s1, 0x80
    ctx->pc = 0x265120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
    // 0x265124: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x265124u;
    {
        const bool branch_taken_0x265124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265124) {
            ctx->pc = 0x2651F8u;
            goto label_2651f8;
        }
    }
    ctx->pc = 0x26512Cu;
    // 0x26512c: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x26512cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x265130: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x265130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x265134: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x265134u;
    {
        const bool branch_taken_0x265134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265134u;
        // 0x265138: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265134) {
            ctx->pc = 0x2651F8u;
            goto label_2651f8;
        }
    }
    ctx->pc = 0x26513Cu;
    // 0x26513c: 0x0  nop
    ctx->pc = 0x26513cu;
    // NOP
label_265140:
    // 0x265140: 0x36318000  ori         $s1, $s1, 0x8000
    ctx->pc = 0x265140u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32768);
    // 0x265144: 0x32231000  andi        $v1, $s1, 0x1000
    ctx->pc = 0x265144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
    // 0x265148: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x265148u;
    {
        const bool branch_taken_0x265148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265148u;
        // 0x26514c: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265148) {
            ctx->pc = 0x2651F8u;
            goto label_2651f8;
        }
    }
    ctx->pc = 0x265150u;
    // 0x265150: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x265150u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x265154: 0x32230080  andi        $v1, $s1, 0x80
    ctx->pc = 0x265154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
    // 0x265158: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x265158u;
    {
        const bool branch_taken_0x265158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265158) {
            ctx->pc = 0x265170u;
            goto label_265170;
        }
    }
    ctx->pc = 0x265160u;
    // 0x265160: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x265160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x265164: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x265164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x265168: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x265168u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x26516c: 0x0  nop
    ctx->pc = 0x26516cu;
    // NOP
label_265170:
    // 0x265170: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x265170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x265174: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x265174u;
    {
        const bool branch_taken_0x265174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265174u;
        // 0x265178: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265174) {
            ctx->pc = 0x2651B0u;
            goto label_2651b0;
        }
    }
    ctx->pc = 0x26517Cu;
    // 0x26517c: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x26517cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x265180: 0x32230040  andi        $v1, $s1, 0x40
    ctx->pc = 0x265180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
    // 0x265184: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x265184u;
    {
        const bool branch_taken_0x265184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x265184) {
            ctx->pc = 0x2651B0u;
            goto label_2651b0;
        }
    }
    ctx->pc = 0x26518Cu;
    // 0x26518c: 0x92630010  lbu         $v1, 0x10($s3)
    ctx->pc = 0x26518cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x265190: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x265190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x265194: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x265194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x265198: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x265198u;
    {
        const bool branch_taken_0x265198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265198u;
        // 0x26519c: 0x2248825  or          $s1, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265198) {
            ctx->pc = 0x2651B0u;
            goto label_2651b0;
        }
    }
    ctx->pc = 0x2651A0u;
    // 0x2651a0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2651a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2651a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2651a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2651a8: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x2651a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x2651ac: 0x0  nop
    ctx->pc = 0x2651acu;
    // NOP
label_2651b0:
    // 0x2651b0: 0x92630011  lbu         $v1, 0x11($s3)
    ctx->pc = 0x2651b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
    // 0x2651b4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2651B4u;
    {
        const bool branch_taken_0x2651b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2651B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651B4u;
        // 0x2651b8: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651b4) {
            ctx->pc = 0x2651F8u;
            goto label_2651f8;
        }
    }
    ctx->pc = 0x2651BCu;
    // 0x2651bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2651BCu;
    {
        const bool branch_taken_0x2651bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2651C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651BCu;
        // 0x2651c0: 0xa2630011  sb          $v1, 0x11($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 17), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651bc) {
            ctx->pc = 0x2651F8u;
            goto label_2651f8;
        }
    }
    ctx->pc = 0x2651C4u;
    // 0x2651c4: 0x0  nop
    ctx->pc = 0x2651c4u;
    // NOP
label_2651c8:
    // 0x2651c8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2651c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2651cc: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x2651ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x2651d0: 0x32231000  andi        $v1, $s1, 0x1000
    ctx->pc = 0x2651d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
    // 0x2651d4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2651D4u;
    {
        const bool branch_taken_0x2651d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2651D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651D4u;
        // 0x2651d8: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651d4) {
            ctx->pc = 0x2651F8u;
            goto label_2651f8;
        }
    }
    ctx->pc = 0x2651DCu;
    // 0x2651dc: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x2651dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x2651e0: 0x32230080  andi        $v1, $s1, 0x80
    ctx->pc = 0x2651e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
    // 0x2651e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2651E4u;
    {
        const bool branch_taken_0x2651e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2651e4) {
            ctx->pc = 0x2651F8u;
            goto label_2651f8;
        }
    }
    ctx->pc = 0x2651ECu;
    // 0x2651ec: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x2651ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2651f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2651f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2651f4: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x2651f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_2651f8:
    // 0x2651f8: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x2651f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x2651fc: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x2651FCu;
    {
        const bool branch_taken_0x2651fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2651fc) {
            ctx->pc = 0x265328u;
            goto label_265328;
        }
    }
    ctx->pc = 0x265204u;
    // 0x265204: 0x8e4507c0  lw          $a1, 0x7C0($s2)
    ctx->pc = 0x265204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1984)));
    // 0x265208: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x265208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x26520c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x26520Cu;
    SET_GPR_U32(ctx, 31, 0x265214u);
    ctx->pc = 0x265210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26520Cu;
    // 0x265210: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x26520Cu, 0x265214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265214u;
label_265214:
    // 0x265214: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x265214u;
    {
        const bool branch_taken_0x265214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265214u;
        // 0x265218: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265214) {
            ctx->pc = 0x265310u;
            goto label_265310;
        }
    }
    ctx->pc = 0x26521Cu;
    // 0x26521c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x26521cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x265220: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x265220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x265224: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x265224u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x265228: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x265228u;
    {
        const bool branch_taken_0x265228 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265228u;
        // 0x26522c: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265228) {
            ctx->pc = 0x265238u;
            goto label_265238;
        }
    }
    ctx->pc = 0x265230u;
    // 0x265230: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x265230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265234: 0x0  nop
    ctx->pc = 0x265234u;
    // NOP
label_265238:
    // 0x265238: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x265238u;
    {
        const bool branch_taken_0x265238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x265238) {
            ctx->pc = 0x265310u;
            goto label_265310;
        }
    }
    ctx->pc = 0x265240u;
    // 0x265240: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x265240u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x265244: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x265244u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x265248: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x265248u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x26524c: 0x24c6f38c  addiu       $a2, $a2, -0xC74
    ctx->pc = 0x26524cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964108));
    // 0x265250: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x265250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x265254: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x265254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x265258: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x265258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x26525c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x26525cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x265260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x265260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265264: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x265264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x265268: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x265268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x26526c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x26526cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x265270: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x265270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x265274: 0xc4750000  lwc1        $f21, 0x0($v1)
    ctx->pc = 0x265274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x265278: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x265278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26527c: 0xc096988  jal         func_25A620
    ctx->pc = 0x26527Cu;
    SET_GPR_U32(ctx, 31, 0x265284u);
    ctx->pc = 0x265280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26527Cu;
    // 0x265280: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x26527Cu, 0x265284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265284u;
label_265284:
    // 0x265284: 0x4615a080  add.s       $f2, $f20, $f21
    ctx->pc = 0x265284u;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x265288: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x265288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x26528c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x26528cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x265290: 0x0  nop
    ctx->pc = 0x265290u;
    // NOP
    // 0x265294: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x265294u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x265298: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x265298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26529c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x26529Cu;
    {
        const bool branch_taken_0x26529c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2652A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26529Cu;
        // 0x2652a0: 0x3c040100  lui         $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26529c) {
            ctx->pc = 0x265310u;
            goto label_265310;
        }
    }
    ctx->pc = 0x2652A4u;
    // 0x2652a4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2652a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2652a8: 0x2248825  or          $s1, $s1, $a0
    ctx->pc = 0x2652a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x2652ac: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x2652acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x2652b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2652B0u;
    {
        const bool branch_taken_0x2652b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2652B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2652B0u;
        // 0x2652b4: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2652b0) {
            ctx->pc = 0x2652C0u;
            goto label_2652c0;
        }
    }
    ctx->pc = 0x2652B8u;
    // 0x2652b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2652b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2652bc: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x2652bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_2652c0:
    // 0x2652c0: 0x9203083b  lbu         $v1, 0x83B($s0)
    ctx->pc = 0x2652c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x2652c4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2652C4u;
    {
        const bool branch_taken_0x2652c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2652c4) {
            ctx->pc = 0x265310u;
            goto label_265310;
        }
    }
    ctx->pc = 0x2652CCu;
    // 0x2652cc: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x2652ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2652d0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2652d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2652d4: 0x24630b9a  addiu       $v1, $v1, 0xB9A
    ctx->pc = 0x2652d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2970));
    // 0x2652d8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2652d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2652dc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2652dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2652e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2652e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2652e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2652e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2652e8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2652e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2652ec: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2652ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2652f0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2652F0u;
    {
        const bool branch_taken_0x2652f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2652F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2652F0u;
        // 0x2652f4: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2652f0) {
            ctx->pc = 0x265310u;
            goto label_265310;
        }
    }
    ctx->pc = 0x2652F8u;
    // 0x2652f8: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2652f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x2652fc: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2652fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x265300: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x265300u;
    {
        const bool branch_taken_0x265300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x265304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265300u;
        // 0x265304: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265300) {
            ctx->pc = 0x265310u;
            goto label_265310;
        }
    }
    ctx->pc = 0x265308u;
    // 0x265308: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x265308u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x26530c: 0x0  nop
    ctx->pc = 0x26530cu;
    // NOP
label_265310:
    // 0x265310: 0x9263000f  lbu         $v1, 0xF($s3)
    ctx->pc = 0x265310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
    // 0x265314: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x265314u;
    {
        const bool branch_taken_0x265314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x265318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265314u;
        // 0x265318: 0x34038000  ori         $v1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265314) {
            ctx->pc = 0x265328u;
            goto label_265328;
        }
    }
    ctx->pc = 0x26531Cu;
    // 0x26531c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26531cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x265320: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x265320u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x265324: 0x0  nop
    ctx->pc = 0x265324u;
    // NOP
label_265328:
    // 0x265328: 0xde630020  ld          $v1, 0x20($s3)
    ctx->pc = 0x265328u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x26532c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x26532cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x265330: 0xfe630020  sd          $v1, 0x20($s3)
    ctx->pc = 0x265330u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 3));
    // 0x265334: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x265334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x265338: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x265338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26533c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x26533cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x265340: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x265340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x265344: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x265344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265348: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x265348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26534c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26534cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265350: 0x3e00008  jr          $ra
    ctx->pc = 0x265350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265350u;
        // 0x265354: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265358u;
}
