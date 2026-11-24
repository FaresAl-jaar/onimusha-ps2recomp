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

// Function: sub_00135110
// Address: 0x135110 - 0x135274
void sub_00135110_0x135110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135110_0x135110");
#endif

    switch (ctx->pc) {
        case 0x135134u: goto label_135134;
        case 0x135168u: goto label_135168;
        case 0x1351d0u: goto label_1351d0;
        default: break;
    }

    ctx->pc = 0x135110u;

    // 0x135110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x135110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x135114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x135114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x135118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13511c: 0x8f83852c  lw          $v1, -0x7AD4($gp)
    ctx->pc = 0x13511cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935852)));
    // 0x135120: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x135120u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x135124: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x135124u;
    {
        const bool branch_taken_0x135124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x135128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135124u;
        // 0x135128: 0x2610f9f0  addiu       $s0, $s0, -0x610 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135124) {
            ctx->pc = 0x135138u;
            goto label_135138;
        }
    }
    ctx->pc = 0x13512Cu;
    // 0x13512c: 0xc04d298  jal         func_134A60
    ctx->pc = 0x13512Cu;
    SET_GPR_U32(ctx, 31, 0x135134u);
    ctx->pc = 0x135130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13512Cu;
    // 0x135130: 0x24041571  addiu       $a0, $zero, 0x1571 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5489));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134A60u, 0x13512Cu, 0x135134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135134u;
label_135134:
    // 0x135134: 0x0  nop
    ctx->pc = 0x135134u;
    // NOP
label_135138:
    // 0x135138: 0x24030270  addiu       $v1, $zero, 0x270
    ctx->pc = 0x135138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    // 0x13513c: 0xaf838020  sw          $v1, -0x7FE0($gp)
    ctx->pc = 0x13513cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934560), GPR_U32(ctx, 3));
    // 0x135140: 0x240a00e4  addiu       $t2, $zero, 0xE4
    ctx->pc = 0x135140u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
    // 0x135144: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x135144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x135148: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x135148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x13514c: 0x2463f9f0  addiu       $v1, $v1, -0x610
    ctx->pc = 0x13514cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965744));
    // 0x135150: 0x11400017  beqz        $t2, . + 4 + (0x17 << 2)
    ctx->pc = 0x135150u;
    {
        const bool branch_taken_0x135150 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x135154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135150u;
        // 0x135154: 0xaf838530  sw          $v1, -0x7AD0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135150) {
            ctx->pc = 0x1351B0u;
            goto label_1351b0;
        }
    }
    ctx->pc = 0x135158u;
    // 0x135158: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x135158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13515c: 0x34039908  ori         $v1, $zero, 0x9908
    ctx->pc = 0x13515cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39176);
    // 0x135160: 0x44438  dsll        $t0, $a0, 16
    ctx->pc = 0x135160u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << 16);
    // 0x135164: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x135164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
label_135168:
    // 0x135168: 0xde060008  ld          $a2, 0x8($s0)
    ctx->pc = 0x135168u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13516c: 0xde090000  ld          $t1, 0x0($s0)
    ctx->pc = 0x13516cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x135170: 0x34a4b0df  ori         $a0, $a1, 0xB0DF
    ctx->pc = 0x135170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45279);
    // 0x135174: 0xde030c68  ld          $v1, 0xC68($s0)
    ctx->pc = 0x135174u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 3176)));
    // 0x135178: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x135178u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x13517c: 0x6387c  dsll32      $a3, $a2, 1
    ctx->pc = 0x13517cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 1));
    // 0x135180: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x135180u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x135184: 0x7387e  dsrl32      $a3, $a3, 1
    ctx->pc = 0x135184u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 1));
    // 0x135188: 0x6200a  movz        $a0, $zero, $a2
    ctx->pc = 0x135188u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x13518c: 0x1283024  and         $a2, $t1, $t0
    ctx->pc = 0x13518cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x135190: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x135190u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x135194: 0x6307a  dsrl        $a2, $a2, 1
    ctx->pc = 0x135194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 1);
    // 0x135198: 0xc42026  xor         $a0, $a2, $a0
    ctx->pc = 0x135198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 4));
    // 0x13519c: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x13519cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x1351a0: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1351a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1351a4: 0x1540fff0  bnez        $t2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1351A4u;
    {
        const bool branch_taken_0x1351a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1351A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351A4u;
        // 0x1351a8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351a4) {
            ctx->pc = 0x135168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135168;
        }
    }
    ctx->pc = 0x1351ACu;
    // 0x1351ac: 0x0  nop
    ctx->pc = 0x1351acu;
    // NOP
label_1351b0:
    // 0x1351b0: 0x240a018d  addiu       $t2, $zero, 0x18D
    ctx->pc = 0x1351b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 397));
    // 0x1351b4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1351b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1351b8: 0x11400017  beqz        $t2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1351B8u;
    {
        const bool branch_taken_0x1351b8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1351BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351B8u;
        // 0x1351bc: 0x34048000  ori         $a0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351b8) {
            ctx->pc = 0x135218u;
            goto label_135218;
        }
    }
    ctx->pc = 0x1351C0u;
    // 0x1351c0: 0x34039908  ori         $v1, $zero, 0x9908
    ctx->pc = 0x1351c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39176);
    // 0x1351c4: 0x44438  dsll        $t0, $a0, 16
    ctx->pc = 0x1351c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << 16);
    // 0x1351c8: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x1351c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x1351cc: 0x0  nop
    ctx->pc = 0x1351ccu;
    // NOP
label_1351d0:
    // 0x1351d0: 0xde060008  ld          $a2, 0x8($s0)
    ctx->pc = 0x1351d0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1351d4: 0xde090000  ld          $t1, 0x0($s0)
    ctx->pc = 0x1351d4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1351d8: 0x34a4b0df  ori         $a0, $a1, 0xB0DF
    ctx->pc = 0x1351d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45279);
    // 0x1351dc: 0xde03f8e8  ld          $v1, -0x718($s0)
    ctx->pc = 0x1351dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4294965480)));
    // 0x1351e0: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1351e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1351e4: 0x6387c  dsll32      $a3, $a2, 1
    ctx->pc = 0x1351e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 1));
    // 0x1351e8: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x1351e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1351ec: 0x7387e  dsrl32      $a3, $a3, 1
    ctx->pc = 0x1351ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 1));
    // 0x1351f0: 0x6200a  movz        $a0, $zero, $a2
    ctx->pc = 0x1351f0u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1351f4: 0x1283024  and         $a2, $t1, $t0
    ctx->pc = 0x1351f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x1351f8: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1351f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1351fc: 0x6307a  dsrl        $a2, $a2, 1
    ctx->pc = 0x1351fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 1);
    // 0x135200: 0xc42026  xor         $a0, $a2, $a0
    ctx->pc = 0x135200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 4));
    // 0x135204: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x135204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x135208: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x135208u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x13520c: 0x1540fff0  bnez        $t2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x13520Cu;
    {
        const bool branch_taken_0x13520c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x135210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13520Cu;
        // 0x135210: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13520c) {
            ctx->pc = 0x1351D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1351d0;
        }
    }
    ctx->pc = 0x135214u;
    // 0x135214: 0x0  nop
    ctx->pc = 0x135214u;
    // NOP
label_135218:
    // 0x135218: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x135218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x13521c: 0xdc25f9f0  ld          $a1, -0x610($at)
    ctx->pc = 0x13521cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AF9F0u));
    // 0x135220: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x135220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x135224: 0x33c38  dsll        $a3, $v1, 16
    ctx->pc = 0x135224u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 16);
    // 0x135228: 0xde080000  ld          $t0, 0x0($s0)
    ctx->pc = 0x135228u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13522c: 0x34039908  ori         $v1, $zero, 0x9908
    ctx->pc = 0x13522cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39176);
    // 0x135230: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x135230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x135234: 0xde03f8e8  ld          $v1, -0x718($s0)
    ctx->pc = 0x135234u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4294965480)));
    // 0x135238: 0x3484b0df  ori         $a0, $a0, 0xB0DF
    ctx->pc = 0x135238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45279);
    // 0x13523c: 0x5307c  dsll32      $a2, $a1, 1
    ctx->pc = 0x13523cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 1));
    // 0x135240: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x135240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x135244: 0x6307e  dsrl32      $a2, $a2, 1
    ctx->pc = 0x135244u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 1));
    // 0x135248: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x135248u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x13524c: 0x5200a  movz        $a0, $zero, $a1
    ctx->pc = 0x13524cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x135250: 0xe62825  or          $a1, $a3, $a2
    ctx->pc = 0x135250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x135254: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x135254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x135258: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x135258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x13525c: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x13525cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x135260: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x135260u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x135264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x135264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135268: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13526c: 0x3e00008  jr          $ra
    ctx->pc = 0x13526Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13526Cu;
        // 0x135270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13526Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135274u;
}
